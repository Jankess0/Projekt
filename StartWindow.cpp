
#include "StartWindow.h"

StartWindow::StartWindow(QWidget *p) : QWidget(p){
    setWindowTitle("EuroTrip");
    resize(400, 500);
   setStyleSheet("background-color: #000600");

    country_list = new QComboBox(this);
    country_list->setStyleSheet(

            "background-color: none;"
            "border-radius: 5px;"
//
//            "down-arrow {"
//            "    image: url(Down-Arrow-PNG-Images-HD.png);"
//            "    background-color: none;"
//            "}"

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

    plus = new QPushButton("+",this);
    plus->setStyleSheet("QPushButton {"
                        "    background-color: #4CAF50; /* Zielony kolor tła */"
                        "    border: 2px solid #d3d3d3;;"
                        "    color: Black; /* Kolor tekstu */"
                        "    padding: 10px 24px; /* Wewnętrzne marginesy */"
                        "    text-align: center;"
                        "    text-decoration: none;"
                        "    display: inline-block;"
                        "    font-size: 15px;"
                        "    margin: 4px 2px;"
                        "    cursor: pointer;"
                        "    border-radius: 15px; /* Zaokrąglone krawędzie */"
                        "    height: 10px;"
                        "    width: 50px;"
                        "}"
                        "QPushButton:hover {"
                        "    background-color: #45a049; /* Ciemniejszy odcień zielonego przy najechaniu myszą */"
                        "}");


    layout = new QVBoxLayout(this);
    layout->addWidget(country_list);
    layout->addWidget(note_box);
    layout->addWidget(note_button);
    layout->addWidget(budget_label);
    layout->addWidget(budget_box);
    layout->addWidget(plus);
    layout->addWidget(sum_label);
    layout->addWidget(sum_box);
    setLayout(layout);


    connect(country_list, QOverload<int>::of(&QComboBox::activated), this, &StartWindow::showCountryWindow);
    connect(note_button, &QPushButton::clicked, this, &StartWindow::save);
    connect(plus,&QPushButton::clicked, this, &StartWindow::load_budget_box);
    connect(plus, &QPushButton::clicked, this, &StartWindow::add_budget);
    connect(plus, &QPushButton::clicked, this, &StartWindow::show_sum);
    connect(plus, &QPushButton::clicked, this, &StartWindow::box_clear);

    load();
    show();

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
    //std::cout << box_value.toDouble() << std::endl;
    double value = box_value.toDouble();
    return value;

}

void StartWindow::add_budget() {
    Budget *value = new Budget;
    value->set_value(load_budget_box());
    //std::cout << value->get_value() << std::endl;
    budget_sum.push_back(value);
}

double StartWindow::get_sum() {
        double total = 0.0;
        for (Budget* budget : budget_sum) {
            total += budget->get_value();
        }
        //std::cout << total << std::endl;
        return total;

}

void StartWindow::show_sum() {
    QString sum = QString::number(get_sum());
    QString dolar = "$";
    QString total = sum + dolar;
    sum_box->setText(total);
}

void StartWindow::box_clear() {
    budget_box->clear();
}