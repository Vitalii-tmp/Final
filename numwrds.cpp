#include<fstream>
#include <iostream>
#include <math.h>
#include<conio.h>
#include <string>


using namespace std;

int main(int number, char** argument)
{
	auto numwrds = [](string Text) { //������� ������� ����������� ������ ���

		int* arr = new int[Text.size()]; //��������� ��������� �����

		int kounter = 0, arr_kounter = 0;    //���������� ���� 0
		for (int i = 0; i < Text.size(); i++) {
			arr[i] = 0;
		}


		for (int i = 0; i < Text.size(); i++)
		{

			if (Text[i] != ' ') {  //���� ������ � ������ Text ������� ������� � ��������� ����� ����� �������� �� 1 ������ ����� 1 

				arr[arr_kounter] = 1;

			}
			if (Text[i] == ' ') {  //���� ������ � ������ Text ������� ������� ������� ������ ������ �� ���������
				arr_kounter++;

			}
		}
		int numb = 0;



		for (int i = 0; i < Text.size(); i++) {   //������ �� �������� ������ (� ����� 1 - �� ����� � 0 -�� �����
			numb = numb + arr[i];                   //�� 1 ��������� � �� �������� ������� ���
		}

		delete[] arr;//������� ���'���
		return numb;
	};

	for (int i = 1; i < number; i++) {
		if (strcmp(argument[i], "-h") == 0) {
			cout << "-v  -version of programm\n -c -number of wioerwiuh\n -f -count number of words in file\n" << endl;
		}


		if (strcmp(argument[i], "-c") == 0) {

			{
				for (int j = i + 1; j < number; j++)
					if (strcmp(argument[j], "-f") == 0)
						cout << "Error!!!\n";
				return 0;

			}
			cout << "number of words: " << number - i - 1 << endl;

			return 0;
		}

		if (strcmp(argument[i], "-v") == 0) {

			cout << "version 2.0 " << endl;
		}

		if (strcmp(argument[i], "-f") == 0) {
			{
				for (int j = i + 1; j < number; j++)
					if (strcmp(argument[j], "-c") == 0)
						cout << "Error!!!\n";
				return 0;


			}
			ifstream file(argument[i + 1]);
			string s;
			getline(file, s);
			cout << numwrds(s);
			return 0;
		}


	}

	string Text;
	cout << "Enter string: ";
	getline(cin, Text);         //������ ����� � ������

	cout << numwrds(Text);

	_getch;
	return 0;

}


//not so good as it could be but OK
//somme configurations reading
//one more nice code block
