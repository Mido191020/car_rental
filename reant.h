//
// Created by at744 on 12/17/2022.
//

#ifndef CAR_RENTAL_REANT_H
#define CAR_RENTAL_REANT_H
#include "car.h"
#include "customer.h"
class rent{
private:
    int rentDay;
    int rentMonth;
    int rentYear;
public:
    void setDay(int);
    void setRentDay(int);
    void setRentMonth(int);
    void setRentYear(int);
    int getDay();
    int getRentDay();
    int getRentMonth();
    int getRentYear();
};
#endif //CAR_RENTAL_REANT_H
