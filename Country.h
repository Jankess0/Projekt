#include <iostream>
#ifndef PROJEKT_COUNTRY_H
#define PROJEKT_COUNTRY_H


class Country {
private: std::string name;

public:
    Country(std::string &name);
    std::string get_name();
};


#endif //PROJEKT_COUNTRY_H
