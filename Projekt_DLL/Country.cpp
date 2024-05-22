#include "Countries.h"

Countries::Country::Country(std::string &name) : name(name){}

std::string Countries::Country::get_name() {
    return name;
}