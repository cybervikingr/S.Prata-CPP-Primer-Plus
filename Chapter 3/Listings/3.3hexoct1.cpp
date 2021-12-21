//Listing 3.3 hexoct1.cpp -- show hex and octal literals 
// -- показывает шестнадцатеричные и восьмеричные литералы
#include <iostream>

int main()
{
	using namespace std;
	int chest = 42;		// decimal integer literal//десятичный целочисленный литерал
	int waist = 0x42;	// hexadecimal integer literal//шестнадцатеричный целочисленный литерал
	int inseam = 042;	// octal integer literal//восьмеричный целочисленный литерал
	
	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 int octal)\n";
	
	return 0;
}