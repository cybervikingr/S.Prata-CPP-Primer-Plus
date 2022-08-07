//Listing 3.12 modulus.cpp -- uses % operator to convert lbs to stone
// -- использование оператора % для преобразования фунтов в стоуны
#include <iostream>

int main()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;
	
	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;		// whole stone // количество целых стоунов
	int pounds = lbs % Lbs_per_stn;		// remainder in pounds // остаток в фунтах
	cout << lbs << " pounds are " << stone << stone 
		 << " stone, " << pounds << " pound(s).\n";
	return 0;
}