#include <iostream>
#include <cmath>

int main() 
{
    int feet,inches,lbs;
    double const inchesInFeet(12);
    double const lbsToKg(2.2);
    double const inchToMeter(0.0254);

    std::cout << "Enter your height in feet and inches by using space: ____\b\b\b\b";
    std::cin >> feet >> inches;
    std::cout << "Enter your weight in pounds: ___\b\b\b";
    std::cin >> lbs;

    double heightInInches = feet * inchesInFeet + inches;
    double heightInMeters = heightInInches * inchToMeter;
    double killo = lbs / lbsToKg;
    double BMI = killo / pow(heightInMeters,2);

    std::cout << "BMI: " << BMI << std::endl;

    return 0;
}