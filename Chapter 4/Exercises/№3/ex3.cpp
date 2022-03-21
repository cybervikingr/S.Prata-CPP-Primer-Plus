#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int ChSize(20);
    char fname[ChSize];
    char lname[ChSize];

    cout << "Enter your first name: ";
    cin.getline(fname, ChSize);
    cout << "Enter your last name: ";
    cin.getline(lname, ChSize);
    
    char fullname[ChSize];
    strcpy(fullname, lname);
    strcat(fullname, ", ");
    strcat(fullname, fname);

    cout << "Here's the information in a single string: " << fullname << endl;
    return 0;
}