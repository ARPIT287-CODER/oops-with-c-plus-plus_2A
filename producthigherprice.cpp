#include <iostream>
using namespace std;

class Product
{
public:
    string productName;
    float price;

    Product(string name, float p)
    {
        productName = name;
        price = p;
    }
};

Product higherPrice(Product p1, Product p2)
{
    if (p1.price > p2.price)
        return p1;
    else
        return p2;
}

int main()
{
    Product p1("Laptop", 50000);
    Product p2("Mobile", 30000);

    Product result = higherPrice(p1, p2);
    cout << result.productName << endl;
    cout << result.price << endl;

    return 0;
}
