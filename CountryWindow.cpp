
#include "CountryWindow.h"

CountryWindow::CountryWindow(const std::string &name) : QWidget(), name(name){
    setWindowTitle(QString::fromStdString(name));
}

