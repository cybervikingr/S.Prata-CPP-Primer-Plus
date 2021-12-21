//Listing 3.4 hexoct2 -- display values in hex and octal
// -- отображает значения в шестнадцатиричном и восьмиричном форматах
#include <iostream>

int main()
{
  using namespace std;
  int chest = 42;
  int waist = 42;
  int inseam = 42;

  cout << "Monsieur cuts a striking figure!" << endl;
  cout << "chest = " << chest << " (decimal for 42)" << endl;
  // manipulator for changing number base
  cout << hex;  // манипуляция для изменения основания системы счисления
  cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
  // manipulator for changing number base
  cout << oct;  // манипуляция для изменения основания системы счисления
  cout << "inseam = " << inseam << " (octal for 42)" << endl;

  return 0;
}
