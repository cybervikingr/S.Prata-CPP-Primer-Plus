#include <iostream>

double CelToFahr(double);

int main()
{
    std::cout << "Please enter a Celsius value: ";
    int celsius;
    std::cin >> celsius;
    
    CelToFahr(celsius);
    return 0;
}

double CelToFahr(double celsius)
{
    double fahrenheit = 1.8 * celsius + 32;
     std::cout << celsius << " degrees Celsius is " << fahrenheit 
            << " degrees Fahrenheit." << std::endl;
}