#include <iostream>
#include <cmath>
using namespace std;
float volleyball(float, float, string);
main()
{

    float holidays, homeweek;
    string year;
    cout << "Enter Year type (leap or normal) : ";
    cin >> year;
    cout << "Enter Number of holidays : ";
    cin >> holidays;
    cout << "Enter Number of weekends Vladmir travels to sofia : ";
    cin >> homeweek;
    float result = volleyball(holidays, homeweek, year);
    cout << "Vladmir plays football for: " << result;
}
float volleyball(float holidays, float homeweek, string year)
{
    float Sofiaweeks = 48 - homeweek;
    float freeSofiaweeks = (3 * Sofiaweeks) / 4;
    float playHolidays = (2 * holidays) / 3;
    float playSofiaweeks = freeSofiaweeks + playHolidays;
    float playhomeweeks = homeweek;
    float playtotal = playSofiaweeks + playhomeweeks;
    if (year == "leap")
    {
        playtotal = (playtotal * 1.15);
    }
    float finalPlaying = floor(playtotal);
    return finalPlaying;
}