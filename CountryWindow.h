#include <QApplication>
#include <QComboBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <vector>
#include <QTextEdit>
#include "fstream"
#include "iostream"
#include <QPixmap>
#include <QLabel>
#include "Countries.h"

#ifndef PROJEKT_COUNTRYWINDOW_H
#define PROJEKT_COUNTRYWINDOW_H


class CountryWindow : public QWidget {
private:
    std::string name;
    QVBoxLayout *layout1;
    QPushButton *save_button;
    QTextEdit *info_note;
    QLabel *pic_label;
    //QPixmap *pic;

public:
    CountryWindow(const std::string& name);
    void load();
    void save_in_notes();
    friend class StartWindow;
};


#endif //PROJEKT_COUNTRYWINDOW_H
