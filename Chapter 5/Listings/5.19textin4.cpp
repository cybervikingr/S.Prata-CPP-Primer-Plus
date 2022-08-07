//Listing 5.19 textin4.cpp -- reading chars with cin.get() -- чтение символов с помощью cin.get()

#include <iostream>

int main()
{
    using namespace std;
    int ch;     // should be int, not char // должен быть типа int, а не char
    int count = 0;

    while((ch = cin.get()) != EOF)      // test for end-of-file // проверка конца файла
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";
    return 0;
}