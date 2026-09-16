#include<iostream>
using namespace std;
class product{
    public:
    int productid;
    int price;
    string name;
    
    product(string Name,int Price,int Id){
        name=Name;
        price=Price;
        productid=Id;
    
    }
    
   
    };

 void compareprice(product p2,product p1){
        if(p1.price>p2.price){
            cout<<"Product name : "<<p1.name<<","<<"Product price  "<<p1.price<<","<<"Product ID : "<<p1.productid<<","<<endl;
           
        }
        else{
            cout<<"Product name : "<<p2.name<<","<<"Product price  "<<p2.price<<","<<"Product ID : "<<p2.productid<<","<<endl; 
        }
    }
int main(){
    product p1("table",500,80);
    product p2("Tea",400,70);
   compareprice(p1,p2);

}