// Listing 4.22 -- using the delete operator -- использование оператора delete
#include <iostream>
#include <cstring>      // or string.h // или string.h
using namespace std;
char * getname(void);   // function prototype // прототип функции

int main()
{
    char * name;        // create pointer but no storage // создать указатель, но без хранилища

    name = getname();   // assign address of string to name // присвоение name адреса строки
    cout << name << " at " << (int *) name << " \n";
    delete [] name;     // memory freed // освобождение памяти

    name = getname();   // reuse freed memory // повторное использование освобожденной памяти
    cout << name << " at " << (int *) name << " \n";
    delete [] name;     // memory freed again // освобождение памяти еще раз

    return 0;
}

char * getname()        // return pointer to new string // возвращает указатель на новую строку
{
    char temp[80];      // temporary storage // временное хранилище
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);   // copy string into smaller space // копировать строку в меньшее пространство

    return pn;          // temp lost when function ends // по завершении функции временная переменная теряется
}