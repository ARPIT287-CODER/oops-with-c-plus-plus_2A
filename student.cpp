#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    int rollno;
    void input(string Name,int Marks,int RollNO){
        name=Name;
        marks=Marks;
        rollno=RollNO;
    }
    void display(){
        cout<<name<<endl;
        cout<<marks<<endl;
        cout<<rollno<<endl;
    }
};
int main(){
    Student s1;
    s1.input("mohan",34,45);
    s1.display();
}