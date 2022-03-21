//Listing 4.15 pointer.cpp -- our first pointer variable -- наша первая переменная-указатель
#include <iostream>

int main()
{
    using namespace std;
    int updates = 6;         // declare a variable // объявить переменную
    int * p_updates;        // declare pointer to an int // объявить указатель на int
    p_updates = &updates;    // assign address of int to pointer // присвоить адрес int указателю

// express values two ways // выразить значения двумя способами
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

// express address two ways // выразить адреса двумя способами
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

// use pointer to change value // изменить значение через указатель
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    return 0;
}