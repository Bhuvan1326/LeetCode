/*Stores time in 24-hour format. Visitors can only understand 12-hour format
with AM/PM notation. Given a valid time HH:MM in 24-hour format, convert it into 12-hour format.
Rules: 00:00 becomes 12:00 AM, 12:00 remains 12:00 PM, and times after 12:00 use PM.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int hh,mm;
    char colon;
    cout << "Enter time in 24-hour format (HH:MM): ";
    cin >> hh >> colon >> mm;

    string period;
    if(hh == 0)
    {
        hh = 12;
        period = "AM";
    }
    else if(hh < 12)
    {
        period = "AM";
    }
    else if(hh == 12)
    {
        period = "PM";
    }
    else
    {
        hh -= 12;
        period = "PM";
    }
    cout << "Time in 12-hour format: " << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << " " << period << endl;
    return 0;
}