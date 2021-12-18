#include <iostream>
void Print1();
void Print2();
int main()
{
	Print1();
	Print1();
	Print2();
	Print2();
	
	return 0;
}

void Print1()
{
	std::cout << "Three blind mice" << std::endl;
}

void Print2()
{
	std::cout << "See how they run" << std::endl;
}