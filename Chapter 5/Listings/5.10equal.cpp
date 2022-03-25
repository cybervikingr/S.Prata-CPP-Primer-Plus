// Listing 5.10 equal.cpp -- equality vs assignment -- равенство или присваивание
#include <iostream>

int main()
{
    using namespace std;
    int quizscores[10] = 
        {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
        cout << "quiz " << i << " is a 20\n";
// Warning: you may prefer reading about this program 
// to actually running it
// Предупреждение: возможно, лучше почитать об этой программе,
// чем в действительности допускать её
    cout << "Doing it dangerously wrong:\n";
    for (i = 0; quizscores[i] = 20; i++)
        cout << "quiz " << i << " is a 20\n";
    
    return 0;
}