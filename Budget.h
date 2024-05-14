#include <iostream>

#ifndef PROJEKT_BUDGET_H
#define PROJEKT_BUDGET_H


class Budget {
private:
    double value;
public:
    double get_value() const;

    void set_value(double value);
    friend class StartWindow;
};


#endif //PROJEKT_BUDGET_H
