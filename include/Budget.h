#include <iostream>

#ifndef BUDGET_H
#define BUDGET_H


class Budget {
private:
    double value;
public:
    double get_value() const;

    void set_value(double value);
    friend class StartWindow;
};


#endif //BUDGET_H
