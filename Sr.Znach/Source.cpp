#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ru");
	int a, b, c, d;

	cout << "¬ведите 4 числа" << endl;
	cin >> a >> b >> c >> d;

	cout << "—реднее арифметическое этих четырех чисел " << (double(a + b + c + d) / 4) << endl;
	
	return 0; // dlya gita

}