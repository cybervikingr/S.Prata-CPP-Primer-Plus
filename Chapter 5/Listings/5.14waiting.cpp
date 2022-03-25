// Listing 5.14 waiting.cpp -- using clock() in a time-delay loop -- использование clock() в цикле временной задержки
#include <iostream>
#include <ctime>    //describes clock() function, clock_t type // описывает функцию clock() и тип clock_t

int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;  // convert to clock ticks // преобразовать в тики часов
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)         // wait until time elapses // ждать, пока не истечет время
        ;                                   // note the semicolon // обратите внимание на точку с запятой
    cout << "done\a\n";
    return 0;
}