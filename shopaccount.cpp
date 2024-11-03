#include "shopaccount.h"

ShopAccount::ShopAccount(){
    std::cout<<"ShopAccount Constructor invoked"<<std::endl;
}

ShopAccount::~ShopAccount(){
    std::cout<<"ShopAccount Destructor invoked"<<std::endl;
}

std::vector<std::string> ShopAccount::CheckAvailableProduct(){
    std::vector<std::string> availableProduct = {"Apple", "Mango"};
    return availableProduct;
}