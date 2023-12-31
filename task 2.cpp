#include <iostream>
using namespace std;


int getWeekDay(int yy, int mm, int dd)
{
    int rst = dd
        + ((153 * (mm + 12 * ((14 - mm) / 12) - 3) + 2) / 5)
        + (365 * (yy + 4800 - ((14 - mm) / 12)))
        + ((yy + 4800 - ((14 - mm) / 12)) / 4)
        - ((yy + 4800 - ((14 - mm) / 12)) / 100)
        + ((yy + 4800 - ((14 - mm) / 12)) / 400)
        - 32045;

    return (rst + 1) % 7;
}

int main()
{
    const char* Names[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    int day = 0;
    day = getWeekDay(2024, 07, 21);
    cout << "Day : " << Names[day] << endl;

    return 0;
}   