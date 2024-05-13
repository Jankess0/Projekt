#include <iostream>
#include <vector>
#include <fstream>
#include "Country.h"
#ifndef PROJEKT_COUNTRIES_H
#define PROJEKT_COUNTRIES_H


class Countries {
private:
    std::vector<Country> list;
public:
    Countries();
    std::vector<Country> get_list();
};


#endif //PROJEKT_COUNTRIES_H
