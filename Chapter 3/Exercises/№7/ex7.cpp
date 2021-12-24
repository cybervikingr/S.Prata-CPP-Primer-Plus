#include <iostream>

int main()
{
    const double kmpm(1.609); // km in 1 mile
    const double lpg(3.785); // liters in gallon

    std::cout << "How many automobile gasoline consumption figure in liters per 100 km: ";
    double lpk(0);
    std::cin >> lpk;

    double mpg = (100 * lpg) / (lpk * kmpm);
    std::cout << lpk << " liters per 100 km = " << mpg << " miless per gallon" << std::endl;

    return 0;
}