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
    QLineEdit *sum_box;
    QPushButton *plus;
    std::vector<Budget*> budget_sum;
public:
    StartWindow(QWidget *p = nullptr);
    void showCountryWindow(int index);
    void save();
    void load();
    double load_budget_box();
    void add_budget();
    double get_sum();
    void show_sum();
    void box_clear();

};


#endif //PROJEKT_STARTWINDOW_H
