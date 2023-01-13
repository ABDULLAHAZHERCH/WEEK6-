#include <iostream>
using namespace std;
float amount(string, string, float);
main()
{
    system("cls");
    string city, product;
    float quantity;
    cout << "Enter Product name(coffee,water,beer,sweets,peanuts) : ";
    cin >> product;
    cout << "Enter city(sofia,plodov,varna) : ";
    cin >> city;
    cout << "Enter Quantity : ";
    cin >> quantity;
    float result = amount(product, city, quantity);
    cout << result;
}
float amount(string product, string city, float quantity)
{
    float total;
    if (city == "sofia")
    {
        if (product == "coffee")
        {
            total = quantity * 0.5;
        }
        else if (product == "water")
        {
            total = quantity * 0.8;
        }
        else if (product == "beer")
        {
            total = quantity * 1.2;
        }
        else if (product == "sweets")
        {
            total = quantity * 1.45;
        }
        else if (product == "peanuts")
        {
            total = quantity * 1.6;
        }
    }
    if (city == "plodov")
    {
        if (product == "coffee")
        {
            total = quantity * 0.4;
        }
        else if (product == "water")
        {
            total = quantity * 0.7;
        }
        else if (product == "beer")
        {
            total = quantity * 1.15;
        }
        else if (product == "sweets")
        {
            total = quantity * 1.3;
        }
        else if (product == "peanuts")
        {
            total = quantity * 1.5;
        }
    }
    if (city == "varna")
    {
        if (product == "coffee")
        {
            total = quantity * 0.45;
        }
        else if (product == "water")
        {
            total = quantity * 0.7;
        }
        else if (product == "beer")
        {
            total = quantity * 1.1;
        }
        else if (product == "sweets")
        {
            total = quantity * 1.35;
        }
        else if (product == "peanuts")
        {
            total = quantity * 1.55;
        }
    }
    return total;
}