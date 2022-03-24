// Listing 5.5 bigstep.cpp -- count as directed -- цикл указанным пользователем шагом
#include <iostream>

int main()
{
    using std::cout;        // a using declaration // объявление using
    using std::cin;
    using std::endl;
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s: \n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    return 0;
}