// Listing 5.13 while.cp -- introducing the while loop -- представление цикла while
#include <iostream>
const int ArSize = 20;

int main()
{
    using namespace std;
    char name[ArSize];

    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;                  // start at beginning of string // начать с начала строки
    while (name[i] != '\0')     // process to end of string // обрабатывать до конца строки
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;                    // don't forget this step // не забывайте этот шаг
    }
    return 0;
}