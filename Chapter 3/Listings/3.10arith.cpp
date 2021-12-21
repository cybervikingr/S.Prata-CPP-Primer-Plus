//Listing 3.10 arith.cpp -- some C++ arithmetic -- примеры некоторых арифметический операций в C++
#include <iostream>

int main()
{
	using namespace std;
	float hats, heads;
	
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point // формат с фиксированной точкой
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;
	
	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	
	return 0;
}