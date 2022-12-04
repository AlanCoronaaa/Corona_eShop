// Alan Corona Lopez " = ACL

#include <iostream>
#include "Billing.h"
#include <string>
using namespace std;


Billing::Billing(){
    cardNumber = "00121300000067800";
    address = "Avenida Ramon Corona #2521";
    ccv = "100";
}

__attribute__((unused)) Billing::Billing(string _cardNumber, string _address, string _ccv){
    cardNumber = _cardNumber;
    address = _address;
    ccv = _ccv;
}

__attribute__((unused)) string Billing::getAddress()const{
    return address;
}


__attribute__((unused)) string Billing::getCardNumber()const{
    return cardNumber;
}

__attribute__((unused)) string Billing::getCcv()const{
    return ccv;
}

void Billing::setAddress(string _address){
    address = _address;
}

void Billing::setCardNumber(string _cardNumber){
    cardNumber = _cardNumber;
}

void Billing::setCcv(string _ccv){
    ccv = _ccv;
}

void Billing::billingPrint(){
    cout << "Impresion de Factturacion\n";
    cout << "\nDireccion: " << address;
    cout << "\nNúmero de tarjeta: **** **** **** " << cardNumber[12] << cardNumber[13] << cardNumber[14] << cardNumber[15] << endl;
}