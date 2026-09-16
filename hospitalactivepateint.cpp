#include<iostream>
using namespace std;
class patient{
    public:
    string name;
    int id;
    static int count;
    patient(string Name,int Id){
        name=Name;
        id=Id;
        count++;
    }
    ~patient(){
        count--;
    }
    static int show_active_patient(){
        return count;
    }

};
int patient::count=0;
int main(){
    patient p1("mohan",4);
    patient p2("rohan",5);
    cout<<patient::show_active_patient();
 

}