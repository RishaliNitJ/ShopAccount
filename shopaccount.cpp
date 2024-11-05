#include "shopaccount.h"

ShopAccount::ShopAccount():m_category(""),m_name(""),m_price(-1),m_stock(-1){
    std::cout<<"ShopAccount Constructor invoked"<<std::endl;
}

ShopAccount::~ShopAccount(){
    std::cout<<"ShopAccount Destructor invoked"<<std::endl;
}

std::vector<std::string> ShopAccount::CheckAvailableProduct(){
    std::vector<std::string> availableProduct = {"Apple", "Mango"};
    return availableProduct;
}
void ShopAccount::UpdateProduct(double newPrice=-1,int newStock=-1,string newName="",string newCategory=""){
    if(newPrice!=-1){
        m_price=newPrice;
        cout<<"price changes to"<<m_price<<endl;
        }
          if(newStock!=-1){
        m_stock=newStock;
        cout<<"stock changes to"<<m_stock<<endl;
        }
          if(!newName.empty()){
        m_name=newName;
        cout<<"name changes to"<<m_name<<endl;
        }
         if(!newCategory.empty()){
        m_category=newCategory;
        cout<<"name changes to"<<m_category<<endl;
        }
}