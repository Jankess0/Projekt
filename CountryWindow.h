#include <QApplication>
#include <QComboBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <vector>
#include "Countries.h"
#include "Country.h"

#ifndef PROJEKT_COUNTRYWINDOW_H
#define PROJEKT_COUNTRYWINDOW_H


class CountryWindow : public QWidget{
private:
    std::string name;
    QPushButton *backButton;
public:
    CountryWindow(const std::string& name);

};


#endif //PROJEKT_COUNTRYWINDOW_H
