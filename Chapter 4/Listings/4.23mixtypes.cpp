// Listing 4.23 -- some type combinations -- некоторые комбинации типов
#include <iostream>

struct antarctica_years_end
{
    int year;
    /* some really interesting data, etc. */
    /* какие-то действительно интересные данные, и т.д. */
};

int main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3];   // array of 3 structures // массив из трех структур
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1]->year << std::endl;
    const antarctica_years_end  ** ppa = arp;
    auto ppb = arp; // C++11 automatic type deduction // C++11 автоматическое приведение типов
// or else use const antarctica_years_end ** ppb = arp; // или можно использовать const antarctica_years_end ** ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb + 1))->year << std::endl;
    return 0;
}


