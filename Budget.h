#include <iostream>

#ifndef PROJEKT_BUDGET_H
#define PROJEKT_BUDGET_H


class Budget {
private:
    double sum;
public:
    double getSum() const;

    void setSum(double sum, double add_to_sum);
    friend class StartWindow;
};


#endif //PROJEKT_BUDGET_H
