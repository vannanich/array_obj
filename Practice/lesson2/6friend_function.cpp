// #include<iostream>
// using namespace std;
// class Student{
//     private:
//         int id,age;
//         string name;
//         float math_score,english_score;
//     public:
//         void friend input();
//         void friend output();
        

// };
// Student s ;
// void input()
// {
//     cout<<"Input student id    :";cin>>s.id;
//     cout<<"Input student name  :";cin>>s.name;
//     cout<<"Input student age   :";cin>>s.age;
//     cout<<"Input student math score   :";cin>>s.math_score;
//     cout<<"Input student english score:";cin>>s.english_score;
// }
// void output()
// {
//     cout<<"===Student Information===="<<endl;
//     cout<<"student id is      :"<<s.id<<endl;
//     cout<<"Student name is    :"<<s.name<<endl;
//     cout<<"Student age is     :"<<s.age<<endl;
//     cout<<"Student math score is    :"<<s.math_score<<endl;
//     cout<<"Student english score is :"<<s.english_score<<endl;
// }

// int main()
// {
//     input();
//     system("cls");
//     //getch();
//     output();
//     return 0;
// }

#include<iostream>
using namespace std;
class Student{
    private:
        int id,year;
        string name,gender;
        float math_score,khmer_score;
    public:
    friend void input();
    friend void output();


};
Student s;
void input()
{
    cout<<"=======INPUT STUDENT INFORMATION======"<<endl;
    cout<<"Input student id :";cin>>s.id;
    cout<<"Input student name:";cin>>s.name;
    cout<<"Input student gender:";cin>>s.gender;
    cout<<"Input student math_score:";cin>>s.math_score;
    cout<<"Input student khmer_score:";cin>>s.khmer_score;
}
void output()
{
    cout<<"=======STUDENT INFORMATION DISPLAY======="<<endl;
    cout<<"Student id is  :"<<s.id<<endl;
    cout<<"Student name is :"<<s.name<<endl;
    cout<<"Student gender is:"<<s.gender<<endl;
    cout<<"Student math score is:"<<s.math_score<<endl;
    cout<<"student khmer score is:"<<s.khmer_score<<endl;
}
int main()
{
    input();
    output();

}