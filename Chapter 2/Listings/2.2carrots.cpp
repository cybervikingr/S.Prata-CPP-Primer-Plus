//Listing 2.2 carrots.cpp -- food processing program
// ��������� �� ���������� ������������ ������� ���������
// ���������� � ���������� ����������
#include <iostream>
int main()
{
	using namespace std;
	int carrots;				//declare an integer variable // ���������� ���������� �������������� ����
	
	carrots = 25;				// assing a value to the variable // ������������ �������� ����������
	cout << "I have ";
	cout << carrots;			// display the value of variable // ����������� �������� ����������
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;		// modify the variable // ��������� ����������
	cout << "Cranch, craunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}