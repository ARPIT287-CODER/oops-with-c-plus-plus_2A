#include<iostream>
using namespace std;
class call{
    public:
     void callbyvalue(int n){
        n=100;
        
     }
     void callbyreference(int &n){
        n=100;
     }
};
int main(){
    call c;
    int n=10;
    c.callbyvalue(n);
    cout<<n<<endl;;
     c.callbyreference(n);
     cout<<n;
}