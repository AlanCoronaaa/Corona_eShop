//
// Created by Alan Corona on 12/4/2022.
//
#include "ShoppingCart.h"
#include <iostream>
using namespace std;
ShoppingCart::ShoppingCart(){
    amountProduct = 0;
}

ShoppingCart::~ShoppingCart(){}

int ShoppingCart::getAmountProduct() const{
    return amountProduct;
}

void ShoppingCart::addProduct(const Product& brandNew,int amount1){
    if(amountProduct < MAX - 1){
        products[amountProduct] = brandNew;
        amount[amountProduct] = amount1;
        amountProduct ++;
    }
}

float ShoppingCart::total(){
    float add = 0;
    for (int i = 0; i < amountProduct; i++){
        add += products[i].getPrice() * amount[i];
    }
    return add;
}

void ShoppingCart::printTicket(){
    cout << "---------TICKET----------" << endl;
    for (int i = 0; i < amountProduct; i++){
        products[i].printProduct();
        cout << amount[i] << "|" << products[i].getPrice() * amount[i] << endl;
    }
    cout << "TOTAL : $" << total() << endl;
    cout << "----------------------" << endl;

}