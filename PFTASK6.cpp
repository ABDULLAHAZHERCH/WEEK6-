#include <iostream>
using namespace std;
float price(float, string);
main()
{
    float km;
    string time;
    cout << "Enter distance in Km : ";
    cin >> km;
    cout << "Enter time  (day,night) :";
    cin >> time;
    float result = price(km, time);
    cout << result;
}
float price(float km, string time)
{
    float total, bybus, bytrain;
    float bus = 0.09;
    float train = 0.06;
    if (time == "day" && km < 20)
    {
        total = (0.79 * km) + 0.70;
        return total;
    }
    else if (time == "night" && km < 20)
    {
        total = (0.9 * km) + 0.70;
        return total;
    }
    else if (km >= 20)
    {
        bybus = (0.9 * km);
        bytrain = (0.06 * km);
        if (bybus > bytrain)
        {
            return bytrain;
        }
        if (bybus < bytrain)
        {
            return bybus;
        }
    }
}