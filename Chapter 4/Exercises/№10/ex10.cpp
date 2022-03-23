#include <iostream>
#include <array>

int main()
{
    using namespace std;
    array<double, 3> result;
    cout << "Enter time for three 40-meter dash (in seconds).\nFirst dash: ";
    cin >> result[0];
    cout << "Second dash: ";
    cin >> result[1];
    cout << "Third dash: ";
    cin >> result[2];
    cout << "First dash: " << result[0] <<  " sec; Second dash: " << result[1] 
    << " sec; Third dash: " << result[2] << " sec;\n";
    const double everage = (result[0] + result[1] + result[2]) / 3;
    cout << "The average time of 40-meters dash is: " << everage << " seconds." << endl;
    return 0;    
}