#include<iostream>
using namespace std;
class area{
    public:
void Area(int a){
    int s=a*a;
cout<<s<<endl;
}
void Area(double a){
    int s=a*a;
    cout<<s<<endl;
}
void simpleintrest(int principal,int time,int rate=1){
    int intrest=(principal*time*rate)/100;
    cout<<intrest<<endl;
}
};
int main(){
area a;
a.Area(4);
a.Area(5.5);
a.simpleintrest(200,300);
a.simpleintrest(200,300,400);
}