//Listing3.1 limits.cpp -- some integer limits -- некоторые ограничения целых чисел
#include <iostream>
#include <climits> // use limits.h for older systems

int main()
{
	using namespace std;		//инициализация n_int максимальным значением int
	int n_int = INT_MAX;	//--// initialize n_int to max int value
	short n_short = SHRT_MAX;	// символы, определённые в файле climits
	long n_long = LONG_MAX;		// symbols defined in climits file
	long long n_llong = LLONG_MAX;
	// операция sizeof выдаёт размер типа или переменной
	// sizeof operator yields size of type or of variable
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl << endl;
	
	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl << endl;
	
	cout << "Minimum int values = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	
	return 0;
}