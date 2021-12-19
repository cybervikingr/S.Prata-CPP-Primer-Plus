#include <iostream>
int yearsToUnits(double);
int main()
{
    std::cout << "Enter the number of light years: ";
    double lyears;
    std::cin >> lyears;

        std::cout << lyears << " light years " << " = " 
                << yearsToUnits(lyears) << " astronomical units." << std::endl;

    return 0;
}

int yearsToUnits(double lyears)
{
    return lyears * 63240;
}