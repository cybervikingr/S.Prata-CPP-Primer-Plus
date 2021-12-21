//Listing 3.6 morechar.cpp -- the char type and int type contrasted 
// -- сравнение типов char и int
#include <iostream>

int main()
{
  using namespace std;
  char ch = 'M';  // присваивает ch код ASCII символа М // assign ASCII code for M to ch
  int i = ch;     // сохраняет этот же код в int // store same code in an int
  cout << "The ASCII code for " << ch << " is " << i << endl;

  cout << "Add one to the character code:" << endl;
  ch = ch + 1; // change character code in ch // изменяет код символа в ch
  i = ch; // save new chatacter code in i // сохраняет код нового символа в i
  cout << "The ASCII code for " << ch << " is " << i << endl;
  // Использование функции-члена cout.put() для отображения символа
  // using the cout.put() member function to display a char
  cout << "Displaying char ch using cout.put(ch): ";
  cout.put(ch);
  // Использование cout.put для отображения символьной константы
  // using cout.put() to display a char constant
  cout.put('!');

  cout << endl << "Done" << endl;

  return 0;
}
