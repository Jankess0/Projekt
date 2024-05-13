#include <QApplication>
#include <QComboBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <vector>
#include "StartWindow.h"
#include "Country.h"
#include "Countries.h"
//class NewWindow : public QWidget {
//public:
//    NewWindow(QWidget *parent = nullptr) : QWidget(parent) {
//        setWindowTitle("Nowe Okno");
//        resize(200, 100);
//
//        QVBoxLayout *layout = new QVBoxLayout(this);
//        layout->addWidget(new QPushButton("Przycisk w nowym oknie", this));
//    }
//};
//class StartWindow : public QWidget{
//private:
//    QComboBox *country_list;
//    QVBoxLayout *layout;
//    std::vector<std::string> countries;
//
//public:
//    StartWindow(QWidget *p = nullptr) : QWidget(p)
//    {
//        setWindowTitle("dupa");
//        resize(300, 200);
//        country_list = new QComboBox(this);
//        layout = new QVBoxLayout(this);
//
//        layout->addWidget(country_list);
//
//    }
//};
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    StartWindow window;
//    QWidget window;
//    window.setWindowTitle("Przykładowe GUI");
//    window.resize(300, 200);
//
//    QComboBox *comboBox = new QComboBox(&window);
//    comboBox->addItem("Opcja 1");
//    comboBox->addItem("Opcja 2");
//    comboBox->addItem("Opcja 3");
//
//    QPushButton *button1 = new QPushButton("Przycisk 1", &window);
//    QPushButton *button2 = new QPushButton("Przycisk 2", &window);
//
//    QVBoxLayout *layout = new QVBoxLayout(&window);
//    layout->addWidget(comboBox);
//    layout->addWidget(button1);
//    layout->addWidget(button2);
//
//    NewWindow newWindow; // Tworzenie nowego okna
//
//    QObject::connect(button1, &QPushButton::clicked, [&]() {
//        window.hide(); // Ukrycie starego okna
//        newWindow.show(); // Pokazanie nowego okna
//    });
//
//    QObject::connect(button2, &QPushButton::clicked, []() {
//        qDebug() << "Naciśnięto Przycisk 2";
//    });



    return app.exec();
}
