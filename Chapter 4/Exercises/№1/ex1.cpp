#include <iostream>

int main()
{
    using namespace std;
    char fname[20];
    char lname[20];
    char grade;
    int age(0);

    cout << "What is your first name? ";
    cin.getline(fname, 20);
    cout << "What is your last name? ";
    cin.getline(lname, 20);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    grade += 1;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}