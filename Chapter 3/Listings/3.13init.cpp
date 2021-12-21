//Listing 3.13 init.cpp -- type changes on initialization -- изменение типа при инициализации
#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;		// int converted to float // int преобразован в float
	int guess(3.9832);	// double converted to int // double преобразован в int
	int debt = 7.2E12;	// result not defined in C++ // результат не определён в C++
	cout << "tree = " << tree << endl;
	cout << "quess = " << guess << endl;
	cout << "debt = " << debt << endl;
	
	return 0;
}