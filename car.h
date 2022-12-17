//
// Created by at744 on 12/17/2022.
//

#ifndef CAR_RENTAL_CAR_H
#define CAR_RENTAL_CAR_H
#include <iostream>
using namespace std;
class car{
    string car_mark[10];
    string car_model[10];
    string car_number[10];
    string car_color[10];
   int maxSpeed[10];
   string status[10];
    float Price;
public:
    void set_model();
    void set_color();
    void set_number(string);
    void set_maxSpeed();
    void set_Price();
    string get_model()const;
    string get_number()const;
    string get_color()const;
    int  get_maxSpeed();
    float get_Price();
    void display();
    //car model we will read it from file
};

#endif //CAR_RENTAL_CAR_H
