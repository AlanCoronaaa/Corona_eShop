//
// Created by Alan Corona on 12/4/2022.
//
#ifndef BILLING_H
#define BILLING_H
#include <string>

class Billing{
private:
    std::string ccv;
    std::string cardNumber;
    std::string address;

public:
    //Constructores
    Billing();

    __attribute__((unused)) Billing(std::string,std::string,std::string);
    //Getters
    __attribute__((unused)) std::string getCardNumber() const;

    __attribute__((unused)) std::string getAddress() const;

    __attribute__((unused)) std::string getCcv() const;
    //Setters
    void setCardNumber(std::string);
    void setAddress(std::string);
    void setCcv(std::string);
    //Funciones
    void billingPrint();
};

#endif //BILLING_H