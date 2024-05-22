#include <QApplication>
#include <QComboBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <vector>
#include <cstdlib>
#include "Countries.h"
#include "CountryWindow.h"
#include "Budget.h"
#include <QTextEdit>
#include <QLineEdit>
#include <QLabel>
#include <QMessageBox>
#ifndef PROJEKT_STARTWINDOW_H
#define PROJEKT_STARTWINDOW_H


class StartWindow : public QWidget{
private:
    QComboBox *country_list;
    QVBoxLayout *layout;
    QHBoxLayout *url_layout;
    QHBoxLayout *calc_layout;
    QTextEdit *note_box;
    QPushButton *note_button;
    QLabel *budget_label;
    QLineEdit *budget_box;
    QLabel *sum_label;
    QLineEdit *sum_box;
    QPushButton *plus_button;
    std::vector<Budget*> budget_sum;
    QPushButton *reset_button;
    QPushButton *skyscaner_button;
    QPushButton *booking_button;
    QPushButton *google_explore_button;

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
    void box_reset();
    void skyscaner();
    void booking();
    void google_explore();

};


#endif //PROJEKT_STARTWINDOW_H
