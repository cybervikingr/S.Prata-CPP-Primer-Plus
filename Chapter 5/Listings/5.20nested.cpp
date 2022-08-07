//Listing 5.20 nested.cpp -- nested loops and 2-D array -- вложенные циклы и двумерный массив

#include <iostream>

const int Cities = 5;
const int Years = 4;

int main()
{
    using namespace std;
    const char * cities[Cities] =   // array of pointers to 5 stings // массив указателей на 5 строк
    { 
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };

    int maxtemps[Years][Cities] =   // 2-D array // двумерный массив
    {
        {96, 100, 87, 101, 105},    // values for maxtemps[0] // значения для maxtemps[0]
        {96, 98, 91, 107, 104},     // values for maxtemps[1] // значения для maxtemps[1]
        {97, 101, 93, 108, 107},    // values for maxtemps[2] // значения для maxtemps[2]
        {98, 103, 95, 109, 108}     // values for maxtemps[3] // значения для maxtemps[3]
    };
    
    cout << "Maximum temperatures for 2008 - 2011\n\n";
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
        cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
        // cin.get();
    return 0;
}