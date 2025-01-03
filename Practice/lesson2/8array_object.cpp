// #include<iostream>
// #include<iomanip>
// #include<conio.h>
// using namespace std;
// class Employee{
//     private:
//         int id,age;
//         char name[20];
//         double salary;
//         string company_name,position;
//     public:
//         void input(int n)
//         {
//             cout<<"\t\t\t\t +ENTER INFOR EMPLOYEE"<<" "<<n<<endl;
//             cout<<"\t\t +Enter Employee Id : ";cin>>id;             fflush(stdin);cin.clear();
//             cout<<"\t\t +Enter Employee name:";cin.getline(name,20);fflush(stdin);cin.clear();
//             cout<<"\t\t +Enter Employee age :";cin>>age;            fflush(stdin);cin.clear();
//             cout<<"\t\t +Enter Employye salary:";cin>>salary;       fflush(stdin);cin.clear();
//             cout<<"\t\t +Enter Employee company:";getline(cin,company_name);fflush(stdin);cin.clear();
//             cout<<"\t\t +Enter Employye Position:";cin>>position;fflush(stdin);cin.clear();
//         }
//         void output()
//         {
//             cout<<left<<"\t\t"<<setw(10)<<id<<setw(10)<<name<<setw(10)<<age<<setw(10)<<salary
//             <<setw(10)<<company_name<<setw(10)<<position<<endl;
//             cout<<"\t\t -----------------------------------------------------------------"<<endl;
//         }
//         static void header()
//         {
//             cout<<"\t\t =================================================================="<<endl;
//             cout<<left<<"\t\t"<<setw(10)<<"ID"<<setw(10)<<"EMPLOYEE NAME"<<setw(10)<<"AGE"
//             <<setw(10)<<"SALARY"<<setw(10)<<"COMPANY NAME"<<setw(10)<<"POSITION"<<endl;
//             cout<<"\t\t ==================================================================="<<endl;
            
//         }

// };
// int main()
// {
//     //Employee em1,em2;
//     // em1.input(1);
//     // em2.input(2);
//     // system("cls");

//     // Employee::header();
//     // cout<<endl;
//     // em1.output();
//     // em2.output();

//     // Employee em[3];
//     // em[0].input(1);
//     // em[1].input(2);
//     // em[2].input(3);

//     // Employee::header(); 

//     // em[0].output();
//     // em[0].output();
//     // em[0].output();

//     int n;
//     cout<<"\t\t Input number of employee :";cin>>n;
//     Employee em[n];
//     for(int i=0;i<n ;i++)
//     {
//         em[i].input(i+1);
//         system("cls");
//     }
//     getch();
//     system("cls");
//     Employee::header();
//     for(int i=0;i<3;i++)
//     {
//         em[i].output();
//     }

    





//     return 0;
// }



#include<iostream>
using namespace std;
class Staff{
    private:
        int id,age;
        char name[20];
        double salary;
        string company_name,position;
    public:
        void input(int n )
        {
            cout<<"============Input Staff Information=="<<n<<"======"<<endl;
            cout<<"Input Staff ID :";cin>>id;fflush(stdin);cin.clear();
            cout<<"Input Staff name:";cin>>name;fflush(stdin);cin.clear();
            cout<<"Input Staff age  :";cin>>age;fflush(stdin);cin.clear();
            cout<<"Input Staff salary:";cin>>salary;fflush(stdin);cin.clear();
            cout<<"Input Staff Company:";cin>>company_name;fflush(stdin);cin.clear();
            cout<<"Input Staff position:";cin>>position;fflush(stdin);cin.clear();
        }
        void output()
        {
            cout<<"===========Display all Information staff============="<<endl;
            cout<<"Staff id :"<<id<<endl;
            cout<<"staff name:"<<name<<endl;
            cout<<"Staff age :"<<age<<endl;
            cout<<"Staff salary :";cin>>salary;
            cout<<"Staff company:";cin>>company_name;
            cout<<"staff position:";cin>>position;
        }
                    
};
int main()
{
    // Staff s[2];
    // s[0].input(1);
    //s[1].input(2);
    




}