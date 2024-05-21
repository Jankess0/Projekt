
#include "StartWindow.h"

StartWindow::StartWindow(QWidget *p) : QWidget(p){
    setWindowTitle("EuroTrip");
    resize(600, 800);
    setStyleSheet("background-color: #000600");

    country_list = new QComboBox(this);
    country_list->setStyleSheet(

            "background-color: none;"
            "border-radius: 5px;"

    );

    Countries countries;
    std::vector<Country> country_vec = countries.get_list();
    country_list->addItem("Wybierz kraj!");
    for(auto& country : country_vec){
        country_list->addItem(QString::fromStdString(country.get_name()));
    }

    note_box = new QTextEdit(this);
    note_box->setPlaceholderText("Miejsce na zapisanie myśli.");
    note_box->setStyleSheet("QTextEdit {"
                            "    background-color: #FFFFCC;"
                            "    border-radius: 10px;"
                            "}"
                            "QScrollBar:vertical {"
                            "    background-color: #FFFFFF;"
                            "}"

    );

    note_button = new QPushButton("Zapisz", this);
    note_button->setStyleSheet("QPushButton {"
                              "    background-color: #FFFFFF;"
                              "    border: 2px solid #d3d3d3;"
                              "    border-radius: 15px;"
                              "    padding: 5px 10px;"
                              "}"
                              "QPushButton:hover {"
                              "    background-color: #4CAF50;"
                              "}"
                              "QPushButton:pressed {"
                              "    background-color: #45a049;"
                              "}");
    budget_label = new QLabel("Kalkulator wydatków");
    budget_label->setStyleSheet("color: white;");
    budget_box = new QLineEdit(this);
    budget_box->setPlaceholderText("Dodaj wydatek:");
    budget_box->setStyleSheet("background-color: #FFFFFF;"
                                "    border-radius: 8px;"
    );

    sum_label = new QLabel("Suma wydatków:");
    sum_label->setStyleSheet("color: white;");

    sum_box = new QLineEdit(this);
    sum_box->setReadOnly(true);
    sum_box->setStyleSheet("background-color: #FFFFFF;"
                                "    border-radius: 8px;"
    );

    plus_button = new QPushButton("+", this);
    plus_button->setStyleSheet("QPushButton {"
                        "    background-color: #4CAF50;"
                        "    border: 2px solid #d3d3d3;;"
                        "    color: Black;"
                        "    padding: 10px 24px;"
                        "    text-align: center;"
                        "    text-decoration: none;"
                        "    display: inline-block;"
                        "    font-size: 15px;"
                        "    margin: 4px 2px;"
                        "    cursor: pointer;"
                        "    border-radius: 15px;"
                        "    height: 15px;"
                        "    width: 50px;"
                        "}"
                        "QPushButton:hover {"
                        "    background-color: #4CAF50;"
                        "}"
                        "QPushButton:pressed {"
                        "    background-color: #45a049;"
                        "}");
    reset_button = new QPushButton("Resetuj wydatki", this);
    reset_button->setStyleSheet("QPushButton {"
                        "    background-color: #FE2D00;"
                        "    border: 2px solid #d3d3d3;;"
                        "    color: Black;"
                        "    padding: 10px 24px;"
                        "    text-align: center;"
                        "    text-decoration: none;"
                        "    display: inline-block;"
                        "    font-size: 15px;"
                        "    margin: 4px 2px;"
                        "    cursor: pointer;"
                        "    border-radius: 15px;"
                        "    height: 15px;"
                        "    width: 50px;"
                        "}"
                        "QPushButton:hover {"
                        "    background-color: #FE0000;"
                        "}"
                         "QPushButton:pressed {"
                         "    background-color: #DF0000;"
                         "}");

    layout = new QVBoxLayout(this);
    layout->addWidget(country_list);
    layout->addWidget(note_box);
    layout->addWidget(note_button);
    layout->addWidget(budget_label);
    layout->addWidget(budget_box);
    layout->addWidget(plus_button);
    layout->addWidget(sum_label);
    layout->addWidget(sum_box);
    layout->addWidget(reset_button);
    setLayout(layout);


    connect(country_list, QOverload<int>::of(&QComboBox::activated), this, &StartWindow::showCountryWindow);
    connect(note_button, &QPushButton::clicked, this, &StartWindow::save);
    connect(plus_button, &QPushButton::clicked, this, &StartWindow::add_budget);
    connect(plus_button, &QPushButton::clicked, this, &StartWindow::show_sum);
    connect(plus_button, &QPushButton::clicked, this, &StartWindow::box_clear);
    connect(reset_button, &QPushButton::clicked, this, &StartWindow::box_reset);

    load();
    show();
    show_sum();
}

void StartWindow::showCountryWindow(int index) {
    if (index > 0){
        QString name = country_list->itemText(index);
        CountryWindow *newWindow = new CountryWindow(name.toStdString());
        newWindow->show();

        connect(newWindow->save_button, &QPushButton::clicked, this, &StartWindow::load);
    }

}

void StartWindow::save() {
    QString note = note_box->toPlainText();
    std::ofstream file("notes");
    file << note.toStdString();
    file.close();
}

void StartWindow::load() {
    std::ifstream file("notes");
    std::string note;
    std::getline(file, note, '\0');
    note_box->setPlainText(QString::fromStdString(note));
    file.close();

}

double StartWindow::load_budget_box() {
    QString box_value = budget_box->text();
    double value = box_value.toDouble();

    if (value < 0){
        throw std::runtime_error("Podano ujemna wartość!");
    }
    return value;

}

void StartWindow::add_budget() {
    try {
        Budget *value = new Budget;
        value->set_value(load_budget_box());
        budget_sum.push_back(value);
    }   catch (const std::runtime_error& e) {
        QMessageBox::warning(this, "Błąd", e.what());
    }
}

double StartWindow::get_sum() {
        double total = 0.0;
        for (Budget* budget : budget_sum) {
            total += budget->get_value();
        }
        return total;

}

void StartWindow::show_sum() {
    double sum = get_sum();
    QString dolar = "$";
    QString total;
    double conv_str = 0;
    std::ifstream file("sum");
    std::string data;
    if(!std::getline(file, data, '\0')){
        file.close();
        total = QString::number(sum) + dolar;
    } else {
        conv_str = std::stod(data);
        total = QString::number(sum+conv_str) + dolar;
    }

    sum_box->setText(total);
    std::ofstream out_file("sum");
    out_file << sum + conv_str;
    out_file.close();
}

void StartWindow::box_clear() {
    budget_box->clear();
}

void StartWindow::box_reset() {
    std::ofstream file("sum", std::ios::trunc);
    file.close();
    sum_box->clear();
    sum_box->setText("0$");
}