//
// Created by Alan Corona on 12/4/2022.
//

#include "Product.h"
#include <iostream>
using namespace std;


Product::Product(){
    name = "default";
    price = 0.0;
}

__attribute__((unused)) __attribute__((unused)) Product::Product(string _name,float _price){
    name = _name;
    price = _price;
}

Product::~Product(){}

__attribute__((unused)) __attribute__((unused)) string Product::getName() const{
    return name;
}

float Product::getPrice() const{
    return price;
}

void Product::setName(string _name){
    name = _name;
}

void Product::setPrice(float _price){
    price = _price;
}

void Product::printProduct(){
    cout << "|" << name << "---------" << price << "|" << endl;
}