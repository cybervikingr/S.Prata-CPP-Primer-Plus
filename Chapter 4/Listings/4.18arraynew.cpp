//Listing 4.18 arraynew.cpp -- using the new operator for arrays -- использование оператора new для массивов
#include <iostream>

int main()
{
    using namespace std;
    double * p3 = new double [3];   // space for 3 doubles // пространство для 3 значений типа double
    p3[0] = 0.2;                    // treat p3 an array name // трактуем p3 как имя массива 
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;                    // increment the pointer // увеличиваем указатель
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;                    // point back to beginning // возврат указателя в начало
    delete [] p3;                   // free the memory // освобождаем память

    return 0;
}