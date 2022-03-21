#include <iostream>

struct CandyBar
{
    char brand[20];
    double weight;
    int calories;
};

int main()
{
    using namespace std;
    CandyBar snack = { "Mocha Munch", 2.3, 350 };
    cout << "Struct snack:\nBrand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calories: " << snack.calories << endl;
    return 0;
}