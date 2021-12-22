#include <iostream>
#include <cmath>

int main() 
{
    std::cout << "Enter the world population: __________\b\b\b\b\b\b\b\b\b\b";
    long long int worldPop(0);
    std::cin >> worldPop;
    
    std::cout << "Enter the population of the Russian Federation: _________\b\b\b\b\b\b\b\b\b";
    long long int countryPop(0);
    std::cin >> countryPop;

    double percentOfPop = double(countryPop) / worldPop * 100;
    std::cout << "The population of the Russia is " << percentOfPop 
    << "% of the world population." << std::endl;

    return 0;
}