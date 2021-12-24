#include <iostream>

int main()
{
    double distanceKm(0);
    double petrol(0);
    
    std::cout << "How many killometers you have driven: ";
    std::cin >> distanceKm; 
   
    std::cout << "How many liters of gasoline you have used: ";
    std::cin >> petrol;
    
    double litersPerHundred = petrol / distanceKm * 100;

    std::cout << litersPerHundred << " liters per 100 km." << std::endl;

    return 0;
}