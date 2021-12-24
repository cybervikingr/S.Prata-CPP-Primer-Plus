#include <iostream>
#include <cmath>

int main() 
{
    
    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl << "First enter the degrees: ";
    int degrees;
    std::cin >> degrees;
    
    std::cout << "Second enter the minutes of arc: ";
    int minutes;
    std::cin >> minutes;
   
    std::cout << "Finally, enter the seconds of arc: ";
    int seconds;
    std::cin >> seconds;

    double decdegrees = degrees + (minutes /60.0) + (seconds / 3600.0);

    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds 
    << " seconds = " << decdegrees << " degrees" << std::endl;
}