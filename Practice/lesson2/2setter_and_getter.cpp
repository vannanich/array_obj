#include<iostream>
#include<cstring>
using namespace std;
class Staff{
    private:
        int id,age;
        char staff_name[20];
        char gender;
        string company_name;
        float salary;
    public:
        void set_all(int id,int age,const char* staff_name,char gender,string company_name,float salary)
        {
            this->id=id;
            this->age=age;
            strcpy(this->staff_name,staff_name);
            this->gender=gender;
            this->company_name=company_name;
            this->salary=salary;
        }
        void display()
        {
            cout<<"Staff id is :"<<id<<endl;
            cout<<"staff name is:"<<staff_name<<endl;
            cout<<"staff age is :"<<age<<endl;
            cout<<"staff gender is:"<<gender<<endl;
            cout<<"staff Cp name :"<<company_name<<endl;
            cout<<"Staff's salarry:"<<salary<<endl;
        }

};
Staff s;
int main()
{
    s.set_all(1001,17,"Vanna Nich",'F',"Ovantin",1000);
    s.display();
}