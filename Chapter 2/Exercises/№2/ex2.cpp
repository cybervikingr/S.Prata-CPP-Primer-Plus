#include <iostream>
int FurlongToYard(int);
int main()
{
	std::cout << "Enter the value in furlongs: ";
	int furlongs;
	std::cin >> furlongs;
	int yards = FurlongToYard(furlongs);
	std::cout << furlongs << " furlongs = " << yards << " yards." << std::endl;
	return 0;
}

int FurlongToYard(int fty)
{
	return 220 * fty;
}