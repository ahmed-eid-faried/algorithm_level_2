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

void NormalPattern(int Num) {
	for (int i = 0; i <= Num; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << char(i + 65);
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
	NormalPattern(Num);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
