
#include "CountryWindow.h"

CountryWindow::CountryWindow(const std::string &name) : QWidget(), name(name){
    setWindowTitle(QString::fromStdString(name));
    setStyleSheet("background-color: #000600");
    info_note = new QTextEdit(this);
    info_note->setStyleSheet("QTextEdit {"
                            "    background-color: #FFFFCC;"
                            "    border-radius: 10px;"
                            "}"
                            "QScrollBar:vertical {"
                            "    background-color: #FFFFFF;"
                            "}"
    );
    save_button = new QPushButton("Przenieś do notatek.", this);
    save_button->setStyleSheet("QPushButton {"
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

    layout1 = new QVBoxLayout(this);
    layout1 ->addWidget(info_note);
    layout1 ->addWidget(save_button);
    setLayout(layout1);

    connect(save_button, &QPushButton::clicked, this, &CountryWindow::save_in_notes);

    load();
}

void CountryWindow::load() {
    std::string dir = "/Users/kamil/Desktop/Programy/D&D/Projekt/cmake-build-debug/Capitols/";
    std::string full_path = dir + name;

    std::ifstream file(full_path);
    std::string info;

    std::getline(file, info, '\0');
    info_note->setPlainText(QString::fromStdString(info));
    file.close();
}

void CountryWindow::save_in_notes() {
    QString info = info_note->toPlainText();
    std::ofstream file("notes");
    file << info.toStdString();
    file.close();

}

