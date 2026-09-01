#include<iostream>
using namespace std;
class employee{
private:
     string name;
     int id;
     int salary;
     public:
     void input(string Name,int ID,int Salary);
     void display();
     
};
void employee:: input(string Name,int ID,int Salary){
     name=Name;
     id=ID;
     salary=Salary;
}
void employee:: display(){
     cout<<name<<endl;
     cout<<id<<endl;
     cout<<salary;
}
int main(){
     employee e;
e.input("sohan",23,10000);
e.display();
}