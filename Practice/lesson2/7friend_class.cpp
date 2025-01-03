// #include<iostream>
// using namespace std;
// class Student
// {
//     private:
//         int id,age;
//         string name,major;
//         float math_score;
//     public:
//         friend class Insert;

// };
// Student s;
// class Insert{
//     public:
//         void input()
//         {
//             cout<<"Input student id   :";cin>>s.id;
//             cout<<"Input student name :";cin>>s.name;
//             cout<<"Input student age :";cin>>s.age;
//             cout<<"Input student major:";cin>>s.major;
//             cout<<"Input student math score :";cin>>s.math_score;

//         }
//         void output()
//         {
//             cout<<"Student id is :"<<s.id<<endl;
//             cout<<"Student name is :"<<s.name<<endl;
//             cout<<"student age is :"<<s.age<<endl;
//             cout<<"Student majjor is :"<<s.major<<endl;
//             cout<<"student math score is :"<<s.math_score<<endl;
//         }

// };
// Insert i;
// int main()
// {
//    i.input();
//    i.output();
    

// }

#include<iostream>
using namespace std;
class Student{
    private:
        int id,age;
        string name,major;
        float math_score;
    public:
    friend class Insert;
};
Student s;
class Insert{
    public:
        void input()
        {
            cout<<"=========Enter Student Information======"<<endl;
            cout<<"Input Student id :";cin>>s.id;
            cout<<"Input Student name:";cin>>s.name;
            cout<<"Input Student major:";cin>>s.major;
            cout<<"Input student math score:";cin>>s.math_score;
        }
        void output()
        {
            cout<<"========Display all Information====="<<endl;
            cout<<"student id is :"<<s.id<<endl;
            cout<<"Student name is:"<<s.name<<endl;
            cout<<"Student major is:"<<s.major<<endl;
            cout<<"Student math score is:"<<s.math_score<<endl;

        }

};
Insert i;
int main()
{
    i.input();
    system("cls");
    i.output();

    return 0;
}