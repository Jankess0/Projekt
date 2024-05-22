

#include <iostream>
#include <vector>
#include <fstream>

#ifndef COUNTRIES_H
#define COUNTRIES_H

class Countries {
public:
    class Country {
    private: std::string name;

    public:
        Country(std::string &name);
        std::string get_name();
    };

private:
    std::vector<Country> list;
public:
    Countries();
    std::vector<Country> get_list();
};

#endif //COUNTRIES_H
