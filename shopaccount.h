#include <vector>
#include <string>
#include <iostream>

class ShopAccount{
    public:
    ShopAccount();
    ~ShopAccount();

    public:
    std::vector<std::string> CheckAvailableProduct();
};