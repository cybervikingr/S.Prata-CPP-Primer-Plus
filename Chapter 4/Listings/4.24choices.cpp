// Listing 4.24 choices.cpp -- array variations -- вариации массивов
#include <iostream>
#include <vector>   // STL C++98
#include <array>    // C++11

int main()
{
    using namespace std;
// C, original C++ // С, оригинальный C++
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
// C++98 STL
    vector<double> a2(4);   // create vector with 4 elements // создать вектор с 4 элементами
// no simple way to initialize in C98 // простой способ инициализации в C98 отсутствует
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
// C++11 -- create and initialize array object // С++11 -- создание и инициализация объекта array
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;        // valid for array objects of same size // допускается для объектов array одинакового размера
// use array notations // использование нотаций массивов
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
// misdeed // преднамеренная ошибка
    a1[-2] = 20.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    return 0;
}