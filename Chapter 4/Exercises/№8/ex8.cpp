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
    Pizza* pz = new Pizza;
    cout << "Enter the diameter of the pizza: ";
    cin >> pz->diameter;
    cin.get();
    cout << "Enter the name of the pizza company: ";
    cin.getline(pz->company, 30);
    cout << "Enter the weight of the pizza: ";
    cin >> pz->weight;

    cout << "Pizza\nCompany: " << pz->company << endl
        << "Diameter: " << pz->diameter << endl
        << "Weight: " << pz->weight << endl;
    delete pz;
    return 0;
}