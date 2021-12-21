//Listing 3.8 floatnum.cpp -- floating-point types типы с плавающей точкой
#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);	// fixed point // фиксированная точка
	float tub = 10.0 / 3.0;								// good to about 6 places // подходит для 6 разрядов
	double mint =  10.0 / 3.0;							// good to about 15 places // подходит для 15 разрядов
	const float million = 1.0e6;
	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million * tub << endl;
	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	
	return 0;
}