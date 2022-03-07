//Listing 4.10 strtype4.cpp -- line input -- ввод строки с пробелами
#include <iostream>
#include <string>               // make string class available // обеспечение доступа к классу string
#include <cstring>              // C-style string library // библиотека обработки строк в стиле C

int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: "
    << strlen(charr) << endl;
    cout << "Length of string in str before input: "
    << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);     // indicate maximum length // указать максимальную длину
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);           // cin now an argument; no length specifier // cin теперь аргумент; спецификатор длины отсутствует
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
    << strlen(charr) << endl;
    cout << "Length of string in str after input: "
    << str.size() << endl;

    return 0;
}