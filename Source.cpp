#include <iostream>
#include <cmath>
#include<conio.h>
using namespace std;
// �������� �������, ��� �������� ������� � ��������� � ���.

float konvert(float a) {
	a = a * 0.621371;
	return a;
}


int main() {
	cout << "Enter km\n";
	float kilometer;
	cin >> kilometer;
	kilometer = konvert(kilometer);
	cout << kilometer;

	_getch;
	return 0;
}