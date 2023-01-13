#include <iostream>
using namespace std;
string chkspeed(float);
main()
{
    system("cls");
    float speed;
    cout << "Enter your Speed : ";
    cin >> speed;
    string result = chkspeed(speed);
    cout << result;
}
string chkspeed(float speed)
{
    string stat;
    if (speed <= 10)
    {
        stat = "Slow";
    }
    if (speed > 10 && speed <= 50)
    {
        stat = "Average";
    }
    if (speed > 50 && speed <= 150)
    {
        stat = "Fast";
    }
    if (speed > 150 && speed <= 1000)
    {
        stat = "Ultra Fast";
    }
    if (speed > 1000)
    {
        stat = "Extreme Speed";
    }
    return stat;
}