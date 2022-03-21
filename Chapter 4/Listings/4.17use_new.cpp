//Listing 4.17 -- using the new operator -- использование оператора new
#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;         // allocate space for int // выделить память под int
    *pt = 1001;                 // store a value there // сохранить значение здесь

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    double * pd = new double;   // allocate space for a double // выделить память под double
    *pd = 10000001.0;           // store a double there // сохранить значение здесь

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;

    return 0;
}