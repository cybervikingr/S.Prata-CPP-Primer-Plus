// Listing 5.9 forstr2.cpp -- reversing an array -- обращение массива в обратном порядке
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // physically modify string object // физическая модификация объекта string
    char temp;
    int i,j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {                       // start block // начало блока
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }                       // end block // конец блока
    cout << word << "\nDone\n";
    return 0;
}