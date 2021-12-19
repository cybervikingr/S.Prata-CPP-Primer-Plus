//Listing 2.2 carrots.cpp -- food processing program
// программа по технологии производства пищевых продуктов
// использует и отображает переменную
#include <iostream>
int main()
{
	using namespace std;
	int carrots;				//declare an integer variable // объявление переменной целочисленного типа
	
	carrots = 25;				// assing a value to the variable // присваивание значения переменной
	cout << "I have ";
	cout << carrots;			// display the value of variable // отображение значения переменной
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;		// modify the variable // изменение переменной
	cout << "Cranch, craunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}