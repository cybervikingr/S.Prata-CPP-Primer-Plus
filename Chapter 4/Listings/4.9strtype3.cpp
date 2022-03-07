//Listing 4.9 strtype3.cpp -- more string class features // дополнительные средства класса string
#include <iostream>
#include <string>               // make string class available // обеспечение доступа к классу string
#include <cstring>              // C-style string library // библиотека обработки строк в стиле C

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    // assingment for string objects and character arrays
    // присваивание объектов string и символьных массивов
    str1 = str2;                // copy str2 to str1 // копировать str2 в str1
    strcpy(charr1, charr2);     // copy charr2 to charr1 // копировать charr2 в charr1

    // appending for string objects and character arrays
    // добавление объектов string и символьных массивов
    str1 += " paste";           // add paste to end of str1 // добавить "paste" в конец str1
    strcat(charr1, " juice");   // add juice to end of charr1 // добавить "juice" в конец charr1

    // finding the lenght of a string object and a C-style string
    // определение длины объекта string и строки в стиле C
    int len1 = str1.size();     // obtain lenght of str1 // получить длину str1
    int len2 = strlen(charr1);  // obtain lenght of charr1 // получить длину charr1

    cout << "The string " << str1 << " contains " 
        << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " 
        << len2 << " characters.\n";
    
    return 0;
}