#include <iostream> 

int YearsToMonths(int);

int main()
{
    std::cout << "Enter your age: " ;
    int age;
    std::cin >> age;
    int months = YearsToMonths(age);
    std::cout << "Your age in months is " << months << " months." << std::endl;

    return 0;
}

int YearsToMonths(int ytm)
{
    return 12 * ytm;
}