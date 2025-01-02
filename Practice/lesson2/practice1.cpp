#include<iostream>
#include<cstring>
using namespace std;
class Product{
    public:

        int barcode,qty;
       // char product_name;  //Single Character
        char product_name[20];
        double price;
        string address;

};
Product p;
int main()
{
    p.barcode=123;
  //p.product_name='C'; //If we use Single Character:
    strcpy(p.product_name,"coca");
    p.qty=2;
    p.price=1.5;
    p.address="Cambodia";
    cout<<"====Product Details===="<<endl;cout<<endl;
    cout<<"Product Barcode:"<<p.barcode<<endl;
  //cout<<"Product Name   :"<<p.product_name<<endl; //If we use Single Character:
    cout<<"Product Name   :"<<p.product_name<<endl;
    cout<<"Product Price $:"<<p.price<<endl;
    cout<<"Product QTY    :"<<p.qty<<endl;
    cout<<"Product address:"<<p.address<<endl;cout<<endl;
    cout<<"====Thank You======"<<endl;

    return 0;
}