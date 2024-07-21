#include <iostream>
#include <string>
using namespace std;
enum enDigit { SmallLetter = 1, CapitalLetter = 2, Digit = 3, SpecialCharacter = 4, };
int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return  Num;
}
int RandomNumber(int From, int To) {
	return (rand() % (To - From)) + From;
}

int GetRandomSelection(enDigit Selection) {
	switch (Selection)
	{
	case enDigit::SmallLetter:
		return RandomNumber(97, 122);
	case enDigit::CapitalLetter:
		return RandomNumber(65, 90);
	case enDigit::Digit:
		return RandomNumber(48, 57);
	case enDigit::SpecialCharacter:
		return RandomNumber(33, 47);
	default:
		return RandomNumber(58, 64);
	}
}
string GenerateKey(int Num) {
	string Key = "";
	for (int i = 1; i <= Num; i++)
	{
		int Char = GetRandomSelection(enDigit::CapitalLetter);
		Key += char(Char);
		if (i % 4 == 0 && i != Num)		Key += '-';
	}
	return Key;
}
void GenerateNumberOfKeys(int Num) {
	for (int i = 0; i < Num; i++)
	{
		cout << "Key [" << i+1 << "]: \t" << GenerateKey(16) << endl;
	}
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	srand((unsigned)time(NULL));
	GenerateNumberOfKeys(16);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}


