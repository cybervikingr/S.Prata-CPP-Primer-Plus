//Listing 3.5 chartype -- тип char
#include <iostream>

int main()
{
  using namespace std;
  char ch;  // объявление переменной char

  cout << "Enter a character: " << endl;
  cin >> ch;
  cout << "Hola! ";
  cout << "Thank you for the " << ch << " character." << endl;

  return 0;
}
