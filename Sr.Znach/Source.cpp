#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ru");
	int a, b, c, d;

	cout << "������� 4 �����" << endl;
	cin >> a >> b >> c >> d;

	cout << "������� �������������� ���� ������� ����� " << (double(a + b + c + d) / 4) << endl;
	
	return 0; // dlya gita

}