//Listing 2.3 getinfo.cpp -- input and output -- ввод и вывод
#include <iostream>

int main()
{
	using namespace std;
	
	int carrots;
	
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;					// C++ input // ввод С++
	cout << "Here are two more. "
	carrots = carrots + 2;
// the next line concatenates output // следующая строка выполняет конкатенацию вывода
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}