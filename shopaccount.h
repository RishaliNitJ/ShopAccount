#include <vector>
#include <string>
#include <iostream>
using namespace std;

class ShopAccount{
    public:
    ShopAccount();
    ~ShopAccount();

    public:
    std::vector<std::string> CheckAvailableProduct();
    void UpdateProduct(double newPrice=-1,int newStock=-1,string newName="",string newCategory="");

    private:
    string m_name;
    string m_category;
    double m_price;
    int m_stock;
};