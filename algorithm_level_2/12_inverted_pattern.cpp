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
void PrintRow(int Num) {
	for (int i = 0; i < Num; i++)
	{
		cout << Num;
	}
	cout << endl;
}
void InvertedPattern(int Num) {
	for (int i = Num; i > 0; i--)
	{
		//PrintRow(i);
		for (int j = 0; j < i; j++)
		{
			cout << i;
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
	InvertedPattern(Num);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
