#include <iostream>
#include <math.h>
#include<conio.h>
#include <string>
using namespace std;

int main()
{
	string vowels = "AEIOUYaeiouy", Text;    //��������� ������ ��� ���� �������� ������ �����

	cout << "Enter string: ";
	getline(cin, Text);         //������ ����� � ������

	reverse(Text.begin(), Text.end());// �������� ������

	cout << endl << Text;//�������� ������������ ������


	_getch;
	return 0;
}