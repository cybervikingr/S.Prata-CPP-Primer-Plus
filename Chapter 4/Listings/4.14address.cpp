//Listing 4.14 address.cpp -- using the & operator to find addresses -- использование оператора & для поиска адресов
#include <iostream>

int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    // NOTE: you may need to use unsigned (&donuts) // ПРИМЕЧАНИЕ: может понадобится использовать
    // and unsigned (&cups) // unsigned (&donuts) и unsigned (&cups)
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;

    return 0;
}