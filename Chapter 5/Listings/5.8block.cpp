// Listing 5.8 block.cpp -- using a block statement -- использование блока
#include <iostream>

int main()
{
    using namespace std;
    cout << "The Amazing Accounto will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++)
    {                                   // block starts here // начало блока
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }                                   // block ends here // конец блока
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amaizing Accounto bids you adieu!\n";
    return 0;
}