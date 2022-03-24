// Listing 5.2 num_test.cpp -- use numeric test in for loop -- использование числовой проверки в цикле for
#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)     // quits when i is 0 // завершается, когда i равен 0
        cout << "i = " << i << "\n";
    cout << "Done now that i = " << i << "\n";
    return 0;
}