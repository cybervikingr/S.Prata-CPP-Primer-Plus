// Listing 5.18 textin3.cpp -- reading chars to end of file -- чтение символов до конца файла

#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);        // attempt to read a char // попытка чтения символа
    while(cin.fail() == false)      // test for EOF // проверка на EOF
    {
        cout << ch;     // echo character // отображение символа
        count++;
        cin.get(ch);    // attempt to read another char // попытка чтения следующего символа
    }
    cout << endl << count << " characters read\n";
    return 0;
}