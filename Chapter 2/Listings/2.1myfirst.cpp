//Listing 2.1 myfirst.cpp -- displays a message -- выводит сообщение на экран
#include <iostream>		// a PREPROCESSOR directive	// директива препроцессора
int main ()		// function header			// заголовок функции
{	// start of function body	// начало тела функции
	using namespace std;	// make definitions visible	// делает видимыми определения
	cout << "Come up and C++ me some time.";	// message					// сообщение
	cout << endl;	// start a new line			// начало новой строки
	cout << "You won't regret it!";		// more output				// дополнительный выводит
	return 0;	// terminate main()			// завершение функции main()
}	// end of function body		// конец тела функции