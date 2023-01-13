#include <iostream>
using namespace std;
void budget(string, float, float);
main()
{
    system("cls");
    float amount, people;
    string category;
    cout << "Enter your bugdet : ";
    cin >> amount;
    cout << "Enter group strength : ";
    cin >> people;
    cout << "Enter Category(vip , normal) : ";
    cin >> category;
    budget(category, amount, people);
}
void budget(string category, float amount, float people)
{
    float tickets, moneyleft, totalleft;
    if (people == 1)
    {
        moneyleft = amount * 0.25;
    }
    if (people > 1 && people <= 4)
    {
        moneyleft = amount * 0.25;
    }
    else if (people >= 5 && people <= 9)
    {
        moneyleft = amount * 0.40;
    }
    else if (people >= 10 && people <= 24)
    {
        moneyleft = amount * 0.50;
    }
    else if (people >= 25 && people <= 49)
    {
        moneyleft = amount * 0.60;
    }
    else if (people >= 50)
    {
        moneyleft = amount * 0.75;
    }
    if (category == "vip")
    {
        tickets = 499.990 * people;
    }
    else
    {
        tickets = 249.990 * people;
    }
    if (moneyleft >= tickets)
    {
        totalleft = moneyleft - tickets;
        cout << "YES you have : " << totalleft << " riyal left";
    }
    else
    {
        totalleft = tickets - moneyleft;
        cout << "NO you need : " << totalleft << " riyal more";
    }
}