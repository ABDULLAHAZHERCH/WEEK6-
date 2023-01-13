#include <iostream>
#include <cmath>
using namespace std;
float volleyball(float, float, string);
main()
{
    system("cls");
    float holidays, homeweek;
    string year;
    cout << "Enter Year type (leap or normal) : ";
    cin >> year;
    cout << "Enter Number of holidays : ";
    cin >> holidays;
    cout << "Enter Number of weekends Vladmir travels to sofia : ";
    cin >> homeweek;
    float result = volleyball(holidays, homeweek, year);
    cout << result;
}
float volleyball(float holidays, float homeweek, string year)
{
    float Sofiaweeks = 48 - homeweek;                     // number of weekends Vladimir is in Sofia
    float freeSofiaweeks = (3 * Sofiaweeks) / 4;          // number of weekends Vladimir is not working in Sofia
    float playHolidays = (2 * holidays) / 3;              // number of holidays Vladimir plays volleyball on
    float playSofiaweeks = freeSofiaweeks + playHolidays; // number of times Vladimir plays in Sofia
    float playhomeweeks = homeweek;                       // number of times Vladimir plays in his hometown
    float playtotal = playSofiaweeks + playhomeweeks;
    if (year == "leap")
    {
        playtotal = (playtotal * 1.15);
    }
    float finalPlaying = floor(playtotal);
    return finalPlaying;
}