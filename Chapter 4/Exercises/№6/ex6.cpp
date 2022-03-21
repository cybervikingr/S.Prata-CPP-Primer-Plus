#include <iostream>
struct CandyBar
{
    char brand[20];
    double weight;
    int calories;
};
int main ()
{
    using namespace std;
    CandyBar snacks[3]{
        {"Mocha Munch", 2.3, 350},
        {"Snickers", 4.8, 460},
        {"Twix", 3.5, 320}
    };
    for (int i = 0; i < 3; i++)
    {
        cout << "Struct snack:\nBrand: " << snacks[i].brand << endl
         << "Weight: " << snacks[i].weight << endl
         << "Calories: " << snacks[i].calories << "\n" << endl;
    }
    return 0;
}