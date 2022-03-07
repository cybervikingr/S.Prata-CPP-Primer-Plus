//Listing 4.7 -- using the C++ string class // использование класса C++ string
#include <iostream>
#include <string>               // make string class available // обеспечение доступа к классу string

int main()
{
    using namespace std;
    char charr1[20];            // create an empty array // создать пустой массив
    char charr2[20] = "jaguar"; // create an initialized array // создать инициализированный массив
    string str1;                // create an empty string object // создать пустой объект строки
    string str2 = "panther";    // create an initialized string // создать инициализированный объект строки

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;                // use cin for input // использовать cin для ввода
    cout << "Here are some felines:\n";
    cout << charr1 << " " << str2 // use cout for output // использовать cout для вывода
        << endl;
    cout << "The third letter in " << charr2 << " is "
        << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
        << str2[2] << endl;       // use array notation // использование нотации массивов

    return 0;
}