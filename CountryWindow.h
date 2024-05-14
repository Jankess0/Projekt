#include <QApplication>
#include <QComboBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <vector>
#include <QTextEdit>
#include "fstream"
#include "iostream"
#include "Countries.h"
#include "Country.h"

#ifndef PROJEKT_COUNTRYWINDOW_H
#define PROJEKT_COUNTRYWINDOW_H


class CountryWindow : public QWidget {
private:
    std::string name;
    QVBoxLayout *layout1;
    QPushButton *save_button;
    QTextEdit *info_note;

public:
    CountryWindow(const std::string& name);
    void load();
    void save_in_notes();
    friend class StartWindow;
};


#endif //PROJEKT_COUNTRYWINDOW_H
