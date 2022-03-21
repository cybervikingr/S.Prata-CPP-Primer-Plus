#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string fullName, firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    fullName = lastName + ", " + firstName;
    
    cout << "Here's the information in a single string: " << fullName << endl;
    return 0;
}