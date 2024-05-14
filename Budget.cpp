
#include "Budget.h"

double Budget::getSum() const {
    return sum;
}

void Budget::setSum(double sum, double add_to_sum) {
    Budget::sum += add_to_sum;
}
