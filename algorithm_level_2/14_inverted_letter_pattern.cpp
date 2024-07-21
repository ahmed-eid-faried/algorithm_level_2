#include <iostream>
#include <string>
using namespace std;
int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return  Num;
}

void InvertedLetterPattern(int Num) {
	for (int i = Num + (65 - 1); i >= 65; i--)
	{
		for (int j = 0; j < i - 65 + 1; j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num;
	Num = ReadPositiveNumber("ENTER POSITIVE NUMBER: ");
	InvertedLetterPattern(Num);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
