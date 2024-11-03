#include "shopaccount.cpp"

int main(){
    ShopAccount shopAccount;
    std::vector<std::string> availableProducts = shopAccount.CheckAvailableProduct();
    for(auto i : availableProducts){
        std::cout<<i<<std::endl;
    }
}