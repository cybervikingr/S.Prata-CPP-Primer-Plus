//Listing 3.14 typecast.cpp -- forcing type changes -- принудительное изменение типов
#include <iostream>

int main()
{
	using namespace std;
	int auks, bats, coots;
	
	/*The following statement adds the values as double,
	//than converts the result to int
	//следующий "оператор" суммирует значения типа double,
	//а полученный результат преобразует в тип int
	*/
	auks = 19.99 + 11.99;
	
	// these statements add values as int
	// эти "операторы" суммируют целочисленные значения
	bats = (int) 19.99 + (int) 11.99;	// old C syntax
	coots = int(19.99) + int(11.99);	// new C++ syntax
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;
	
	char ch = 'Z';
	cout << "The code for " << ch << " is ";	//print as char
	cout << int(ch) << endl;			// print as int
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;		// using static_cast
	
	return 0;
}
