//
// Created by Alan Corona on 12/4/2022.

#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>


class Product{
private:
    std::string name;
    float price;
public:
    //Constructores
    Product();

    __attribute__((unused)) Product(std::string,float);
    ~Product();
    //Seccion de getters
    __attribute__((unused)) std::string getName() const;
    float getPrice() const;
    //Seccion de setters
    void setName(std::string);
    void setPrice(float);
    //Metodos
    void printProduct();
};

#endif