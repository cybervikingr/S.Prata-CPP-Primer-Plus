//Listing 2.6 convert.cpp -- converts stone to pounds -- преобразует стоуны в фунты
#include <iostream>
int stonetolb(int);		// function prototype // прототип функции
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: "'
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}