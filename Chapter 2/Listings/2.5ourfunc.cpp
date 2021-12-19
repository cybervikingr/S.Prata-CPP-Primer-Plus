//Listing 2.5 ourfunc.cpp -- defining your own function -- ����������� ����������� �������
#include <iostream>
void simon(int);	//function prototype for simon() // �������� ������� simon()

int main()
{
	using namespace std;
	simon(3);		// call the simon() function // ����� ������� simon()
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);	// call it again // ��� ���� ����� simon()
	cout << "Done!" << endl;
	return 0;
}

void simon(int n)	// define the simon() function // ����������� ������� simon()
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
}					// void function don't need return statements // ������� void �� ������� ���������� return