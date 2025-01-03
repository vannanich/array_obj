#include<iostream>
#include<cstring>
using namespace std;
class Product{
    private:
        int barcode,qty,discount;
        char product_name[20];
        float price;
        string expired;
    public:
        void set_all(int barcode,int qty,int discount,const char* product_name,float price,string expired)
        {
            this->barcode=barcode;
            this->qty=qty;
            this->discount=discount;
            strcpy(this->product_name,product_name);
            this->price=price;
            this->expired=expired;
        }
        int get_barcode()
        {
            return barcode;
        }
        int get_qty()
        {
            return qty;
        }
        int get_discount()
        {
            return discount;
        }
        const char* get_product_name()
        {
            return product_name;
        }
        float get_price()
        {
            return price;
        }
        string get_expired()
        {
            return expired;
        }

};
int main()
{
    Product p;
    p.set_all(1001,10,50,"coca",10,"10/02/2089");

    float discount_price,payment,total;
    
    total = p.get_qty() * p.get_price();
    discount_price = total * p.get_discount()/100;
    payment = total-discount_price;


    cout<<"Here is Product ID :"<<p.get_barcode()<<endl;
    cout<<"Here is product name:"<<p.get_product_name()<<endl;
    cout<<"Here is Product Price:"<<p.get_price()<<endl;
    cout<<"Here is Product qty  :"<<p.get_qty()<<endl;
    cout<<"Here is Product expired:"<<p.get_expired()<<endl;

    cout<<"=========Invoice=========="<<endl;
    cout<<"total price :"<<total<<"$"<<endl;
    cout<<"discount price:"<<discount_price<<"$"<<endl;
    cout<<"Total payment :"<<payment<<"$"<<endl;

    return 0;
}