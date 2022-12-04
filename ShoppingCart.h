#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include "Product.h"


static const int MAX = 25;
class ShoppingCart{
private:
    Product products[MAX];
    int amount[MAX];
    int amountProduct;
public:
    ShoppingCart();
    ~ShoppingCart();

    int getAmountProduct() const;
    void addProduct(const Product&, int);
    float total();
    void printTicket();
};

#endif
