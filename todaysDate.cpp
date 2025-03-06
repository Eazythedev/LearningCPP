#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

int main() {
    // Create the datetime structure and use mktime to fill in missing members
    time_t timestamp = time(&timestamp);
    struct tm datetime = *localtime(&timestamp);

    datetime.tm_year = 2025 - 1900; // Number of years since 1900
    datetime.tm_mon = 3 - 1; // Number of months since January
    datetime.tm_mday = 5;
    datetime.tm_hour = 15;
    datetime.tm_min = 30;
    datetime.tm_sec = 20;
    mktime(&datetime);

    string weekdays[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    cout << "Today is a " << weekdays[datetime.tm_wday] << ".";
    return 0; // Outputs error that 'localtime' is unsafe
}
