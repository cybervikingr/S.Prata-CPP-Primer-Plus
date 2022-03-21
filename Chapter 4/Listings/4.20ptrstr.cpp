//Listing 4.20 ptrstr.cpp -- using pointers to string -- использование указателей на строки
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char animal[20] = "bear";   // animal holds bear // массив animal хранит значение bear
    const char * bird = "wren"; // bird holds address of string // bird хранит адрес строки
    char * ps;

    cout << animal << " and ";  // display bear // вывести bear
    cout << bird << " \n";      // display wren // вывести wren
    // cout << ps << " \n";     // may display garbage, may cause a crash // может вывести любые данные, может вызвать ошибку

    cout << "Enter a kind of animal: ";
    cin >> animal;              // ok if input < 20 chars // ввод возможен, если ввод меньше 20 символов
    // cin >> ps; Too horrible a blunder to try;  // cin >> ps; очень опасная ошибка, чтобы попробовать
    // ps doesn't point to allocated space // ps не указывает на выделенное пространство

    ps = animal;                // set ps to point to string // установить ps указатель на строку
    cout << ps << "!\n";        // ok, same as using animal // нормально; то же, что и применение animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char(strlen(animal)+1);    // get new storage // получить новое хранилище
    strcpy(ps, animal);         // copy string to new storage // копировать строку в новое хранилище
    cout << "After using strcpy()\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete[] ps;

    return 0;
}