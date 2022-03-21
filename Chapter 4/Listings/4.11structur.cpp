//Listing 4.11 structur.cpp -- a simple structure -- простая структура
#include <iostream>
struct  inflatable      // structure declaration // объявление структуры
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest = 
    {
        "Glorious Gloria",  // name value // значение name
        1.88,               // volume value // значение volume
        29.99               // price value // значение price
    };  // guest is a structure variable of type inflatable // guest - структурная переменная типа inflatable
    // It's initialized to the indicated values // Она инициализирована указанными значениями

    inflatable pal = 
    {
        "Audacious Arthur",
        3.12,
        32.99
    };  // pal is a second variable of type inflatable // pal - вторая переменная типа inflatable
    // NOTE: some implementations require using // ПРИМЕЧАНИЕ: некоторые реализации требуют использования
    // static inflatable guest =

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name member of the pal variable // pal.name - член name переменной pal
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}
