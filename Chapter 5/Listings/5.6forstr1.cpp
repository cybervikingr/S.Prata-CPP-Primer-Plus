// Listing 5.6 forstr1.cpp -- using for with a string -- использование цикла for со строкой
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // display letter in reverse order // отображение символов в обратном порядке
    for (int i = word.size() -1; i >= 0; i--)
        cout << word[i];
    cout << "\nBye.\n";
    return 0;
}