#include <iostream>
struct Pizza
{
    char company[30];
    double diameter;
    double weight;
};
int main()
{
    using namespace std;
    Pizza pizza;
    cout << "Enter the name of the pizza company: ";
    cin.getline(pizza.company, 30);
    cout << "Enter the diameter of the pizza: ";
    cin >> pizza.diameter;
    cout << "Enter the weight of the pizza: ";
    cin >> pizza.weight;

    cout << "Pizza\nCompany: " << pizza.company << endl
        << "Diameter: " << pizza.diameter << endl
        << "Weight: " << pizza.weight << endl;
    return 0;
}