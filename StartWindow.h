#include <QApplication>
#include <QComboBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <vector>
#include "Countries.h"
#include "Country.h"
#include "CountryWindow.h"
#include "Budget.h"
#include <QTextEdit>
#include <QLineEdit>
#include <QLabel>
#ifndef PROJEKT_STARTWINDOW_H
#define PROJEKT_STARTWINDOW_H


class StartWindow : public QWidget{
private:
    QComboBox *country_list;
    QVBoxLayout *layout;
    QTextEdit *note_box;
    QPushButton *note_button;
    QLabel *budget_label;
    QLineEdit *budget_box;
    QLabel *sum_label;
    QLineEdit *sum;
    QPushButton *plus;
public:
    StartWindow(QWidget *p = nullptr);
    void showCountryWindow(int index);
    void save();
    void load();
    void load_budget_box();

};


#endif //PROJEKT_STARTWINDOW_H
