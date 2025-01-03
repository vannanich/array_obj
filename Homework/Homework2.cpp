#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Product {
    private:
        int barcode,qty;
        string pro_name;
        char expired[30];
        float price , discount,total,payment,dis_price;
    public:
        void input()
        {
            cout<<"\t\t\t=======Enter Information Product========"<<endl;
            cout<<"\t\t\t+ Input Product Barcode     :";cin>>barcode; fflush(stdin);cin.clear();
            cout<<"\t\t\t+ Input Product Name        :";getline(cin,pro_name);fflush(stdin);cin.clear();
            cout<<"\t\t\t+ Input Procut Price        :";cin>>price;   fflush(stdin);cin.clear();
            cout<<"\t\t\t+ Input Product Qty         :";cin>>qty;     fflush(stdin);cin.clear();
            cout<<"\t\t\t+ Input Product Expired     :";cin>>expired; fflush(stdin);cin.clear();
        }
        float total_price()
        {
            total = qty * price;
            cout<<endl;
            cout<<"\t\t\tTotal Price is [$]:"<<total<<endl;cout<<endl;
            return total;
        }
        float discount_price()
        {
            if(total >0 && total< 1000)
            {
                discount = 10;
                payment = total - (total * discount)/100;
                cout<<"\t\t\tYou received discount 10%!"<<endl;
            }
            else if(total > 1000 && total <= 2000)
            {
                discount = 20;
                payment= total - (total * discount/100);
                cout<<"\t\t\tYou received discount 20%!"<<endl;
            }
            else if(total >2000 && total <= 3000)
            {
                discount = 30;
                payment= total - (total * discount)/100;
                cout<<"\t\t\tYou received discount 30%!"<<endl;
            }
            else {
                discount= 40;
                payment = total - (total * discount)/100;
                cout<<"\t\t\tYou received discount 40%! "<<endl;
            }
            return discount;
        }
        float total_payment1()
        {
            dis_price = total - payment;
            cout<<endl;
            cout<<"\t\t\tPrice After Discount [$]:"<<payment<<endl;
            cout<<endl;
            return payment;
        }
        void display()
        {
            cout<<setw(20)<<barcode<<setw(20)<<pro_name
            <<setw(20)<<price<<setw(20)<<qty<<setw(20)<<expired
            <<setw(20)<<total<<setw(20)<<discount<<setw(20)<<payment<<endl;

        }
        static void header()
        {
            cout<<setw(20)<<"BARCODE"<<setw(20)<<"PRODUCT NAME"
            <<setw(20)<<"PRICE[$]"<<setw(20)<<"QTY"<<setw(20)<<"EXPIRED"
            <<setw(20)<<"TOTAL[$]"<<setw(20)<<"DISCOUNT[%]"<<setw(20)<<"Payment[$]"<<endl;
        }
        static void footer()
        {
            cout<<endl;
            cout<<"\t\t\t\t\t\t\t=====Thank you For Your Ordering====="<<endl;
        }
};
int main()
{
    Product p;
    system("color 2");
    p.input();
    system("cls");
    p.total_price();
    p.discount_price();
    p.total_payment1();
    system("color 3");
    cout<<"\t\t\tPress Any key to display invoce !"<<endl;
    getch();
    system("cls");
    cout<<"\t\t\t\t\t\t\t ==========INVOICE========="<<endl;cout<<endl;
    Product::header();
    cout<<endl;
    p.display();
    cout<<endl;
    Product::footer();


    return 0;
}