#include <iostream>
#include <math.h>
#include<conio.h>
#include <string>
using namespace std;

int main()
{
	string vowels = "AEIOUYaeiouy", Text;    //створюємо стрічку яка буде зберігати голосні літери

	cout << "Enter string: ";
	getline(cin, Text);         //вводим текст в стрічку

	reverse(Text.begin(), Text.end());// виконуємо реверс

	cout << endl << Text;//виводимо відредаговану стрічку


	_getch;
	return 0;
}