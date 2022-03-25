// Listing 5.15 dowhile.cpp -- exit-condition loop -- цикл с проверкой на выходе
#include <iostream>

int main()
{
    using namespace std;
    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number\n";
    do
    {
        cin >> n;       // execute body // выполнить тело цикла
    } while (n != 7);   // then test // затем проверить
    cout << "Yes, 7 is my favorite number.\n";
    return 0;        
}