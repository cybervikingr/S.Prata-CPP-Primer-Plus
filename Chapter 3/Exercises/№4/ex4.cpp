#include <iostream>

int main()
{
    long long int valSeconds(0);
    const int hoursInDay(24);
    const int minutesInHour(60);
    const int secondsInMinute(60);

    std::cout << "Enter the number of seconds: ";
    std::cin >> valSeconds;

    int seconds = valSeconds % secondsInMinute;
    int minutes = valSeconds / secondsInMinute % minutesInHour;
    int hours = valSeconds / 3600 % secondsInMinute;
    int days = valSeconds / secondsInMinute / minutesInHour / hoursInDay;

    std::cout << valSeconds << " seconds = " << days << " days, " << hours 
    << " hours, " << minutes << " minutes, " << seconds << " seconds." << std::endl;

    return 0;
}