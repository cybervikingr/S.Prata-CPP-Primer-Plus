//Listing 2.5 ourfunc.cpp -- defining your own function -- определение собственной функции
#include <iostream>
void simon(int);	//function prototype for simon() // прототип функции simon()

int main()
{
	using namespace std;
	simon(3);		// call the simon() function // вызов функции simon()
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);	// call it again // ещё один вызов simon()
	cout << "Done!" << endl;
	return 0;
}

void simon(int n)	// define the simon() function // определение функции simon()
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
}					// void function don't need return statements // функция void не требует операторов return