#include <iostream> 

void theTime(int h,int m);

int main()
{
    int hours;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    int minutes;
    std::cin >> minutes;
    
    theTime(hours, minutes);

    return 0;
}

void theTime(int h, int m)
{
    std::cout << "Time: " << h << ":" << m << std::endl;
}