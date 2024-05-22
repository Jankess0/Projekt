#include "Countries.h"

Countries::Countries(){
    std::ifstream input("countries_list.txt");
    std::string  country_name;

    while (std::getline(input, country_name)){
        Country country(country_name);
        list.push_back(country);
    }
    input.close();
}

std::vector<Countries::Country> Countries::get_list() {
    return list;
}