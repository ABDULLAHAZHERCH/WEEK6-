#include <iostream>
using namespace std;
float income(string, int, int);
main()
{
    system("cls");
    string screen;
    float row, column;
    cout << "Enter Type of Screen(premiere,normal,discount) : ";
    cin >> screen;
    cout << "Enter no. of rows : ";
    cin >> row;
    cout << "Enter no. of columns : ";
    cin >> column;
    float result = income(screen, row, column);
    cout << result;
}
float income(string screen, int row, int column)
{
    float total;
    if (screen == "premiere")
    {
        total = row * column * 12;
    }
    else if (screen == "normal")
    {
        total = row * column * 7.5;
    }
    else if (screen == "discount")
    {
        total = row * column * 5;
    }
    return total;
}