//
// Created by Alan Corona on 12/4/2022.
//

#include <iostream>
#include "User.h"
#include "Billing.h"
#include <string>
using namespace std;

User::User(){
    name = "Alan";
    age = "19";
    email = "alancorona@email.com";

}

__attribute__((unused)) User::User(string _name, string _age,string _email, string _address, string _cardNumber, string _ccv){
    name = _name;
    age = _age;
    email = _email;
    billing.setCardNumber(_cardNumber);
    billing.setAddress(_address);
    billing.setCcv(_ccv);
}


//Seccion de Getters

string User::getName()const{
    return name;
}

__attribute__((unused)) string User::getAge()const{
    return age;
}

__attribute__((unused)) string User::getEmail()const{
    return email;
}

__attribute__((unused)) Billing User::getBilling()const{
    return billing;
}

//Seccion de Setters

void User::setBilling(string _cardNumber, string _address, string _ccv){
    billing.setCardNumber(_cardNumber);
    billing.setAddress(_address);
    billing.setCcv(_ccv);
}

void User::setName(string _name){
    name = _name;
}

void User::setAge(string _age){
    age= _age;
}

void User::setEmail(string _email){
    email = _email;
}


//metodos

void User::PrintUser(){
    cout<< "Nombre: " << name << endl;
    cout << "Edad: " << age << endl;
    cout << "Correo electronico: " << email << endl;
    billing.billingPrint();
}