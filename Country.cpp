#include "Country.h"

Country::Country(std::string &name) : name(name){}

std::string Country::get_name() {
    return name;
}