cmake_minimum_required(VERSION 3.23)
project(SituacionProblema_CoronaeShop)

set(CMAKE_CXX_STANDARD 14)

add_executable(SituacionProblema_CoronaeShop Billing.cpp inicializacion.cpp Product.cpp Product.h ShoppingCart.cpp ShoppingCart.h User.cpp User.h Billing.h)
