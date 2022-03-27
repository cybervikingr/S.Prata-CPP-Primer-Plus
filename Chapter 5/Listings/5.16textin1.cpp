// Listing 5.16 textin1.cpp -- reading chars with a while loop -- чтение символов в цикле while
#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;      // use basic input // использование базового ввода
    cout << "Enter characters; enter # to quit.\n";
    cin >> ch;          // get the character // получение символа
    while (ch != '#')   // test the character // проверка символа
    {
        cout << ch;     // echo the character // отображение символа
        ++count;        // count the character // подсчет символа
        cin >> ch;      // get the next character // получение следующего символа
    }
    cout << endl << count << " characters read.\n";
    return 0;
}