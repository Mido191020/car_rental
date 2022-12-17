//
// Created by at744 on 12/17/2022.
//

#ifndef CAR_RENTAL_CUSTOMER_H
#define CAR_RENTAL_CUSTOMER_H
#include "car.h"
class customer{
private:
    string name;
    string phone;
    string address;
    long long id;
public:
    customer();
    customer(string ,string,string,long long );
    void set_name();
    void setPhone(string phone);
    void setAddress(string address);
    void set_id();
    string get_name()const;
    long long get_id()const;
   string getPhone();
    string getAddress();

};
#endif //CAR_RENTAL_CUSTOMER_H
