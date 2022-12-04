//
// Created by Alan Corona on 12/4/2022.

#ifndef USER_H
#define USER_H
#include <string>
#include "Billing.h"
//CA
class User{

private:
    std::string name;
    std::string age;
    std::string email;
    Billing billing;

public:

    //Constructores
    User();

    __attribute__((unused)) User(std::string,std::string,std::string,std::string,std::string,std::string);

    //Getters
    std::string getName()const;

    __attribute__((unused)) std::string getAge() const;

    __attribute__((unused)) std::string getEmail()const;

    __attribute__((unused)) Billing getBilling()const;

    //Setters
    void setBilling(std::string,std::string,std::string);
    void setName(std::string);
    void setAge(std::string);
    void setEmail(std::string);


    //Impresion datos
    void PrintUser();

};

#endif //USER_H