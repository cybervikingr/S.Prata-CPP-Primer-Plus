#include <iostream>
#include <cstring>
struct CandyBar
{
    char brand[20];
    double weight;
    int calories;
};
// version 2
int main()
{
    using namespace std;
    CandyBar* snacks = new CandyBar[3];
    
    strcpy(snacks[0].brand, "Mocha Munch");
    snacks[0].weight = 2.3;
    snacks[0].calories = 350;
    strcpy(snacks[1].brand, "Mars");
    snacks[1].weight = 2.5;
    snacks[1].calories = 390;
    strcpy(snacks[2].brand, "Milky Way");
    snacks[2].weight = 3.4;
    snacks[2].calories = 400;
    
    cout << "Snack 1\n Brand name: " << snacks[0].brand
         << "\n Weight: " << snacks[0].weight
         << "\n Calories: " << snacks[0].calories << endl;
    cout << "Snack 2\n Brand name: " << snacks[1].brand
         << "\n Weight: " << snacks[1].weight
         << "\n Calories: " << snacks[1].calories << endl;
    cout << "Snack 3\n Brand name: " << snacks[2].brand
         << "\n Weight: " << snacks[2].weight
         << "\n Calories: " << snacks[2].calories << endl;
    delete [] snacks;
    return 0;
}
/* Version 1
void PrintSnacks(CandyBar snacks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Struct snack:\nBrand: " << snacks[i].brand << std::endl
            << "Weight: " << snacks[i].weight << std::endl
            << "Calories: " << snacks[i].calories << "\n" << std::endl;
    }
}

int main()
{
    using namespace std;
    CandyBar* snacks = new CandyBar[0];
    int n = 0;
    cout << "How many snacks do you want to enter? ";
    cin >> n;cin.get();
    for (int j = 0; j < n; j++)
    {
        cout << "Enter the brand of the snack: ";
        cin.getline(snacks[j].brand, 20);
        cout << "Enter the weight of the snack: ";
        cin >> snacks[j].weight;
        cout << "Enter the calories of the snack: ";
        cin >> snacks[j].calories;
        cin.get();
        cout << endl;
    }
    PrintSnacks(snacks, n);
    delete[] snacks;
    return 0;
}
*/