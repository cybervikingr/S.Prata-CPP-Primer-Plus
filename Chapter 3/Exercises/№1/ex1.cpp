#include <iostream>

int main()
{
    const int inchInFoot = 12;

    std::cout << "Enter your height in inches: __\b\b";
    int inches = 0;
    std::cin >> inches;

    int feet = inches / inchInFoot;
    int inch = inches % inchInFoot;

    std::cout << "Your height is " << feet << " feet and " << inch 
    << " inch(es)." << std::endl; 

    return 0;
}