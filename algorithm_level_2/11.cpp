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
void PrintResult(bool IsPalindromeNumber) {
	if (IsPalindromeNumber) {
		cout << "It is Palindrome Number \t" << endl;
	}
	else {
		cout << "It is not Palindrome Number \t" << endl;
	}

}
int  ReverseDigitsOfNumber(int Num) {
	int Remainder = 0;
	int ReverseNum = 0;
	while (Num > 0) {
		Remainder = Num % 10;
		Num = Num / 10;
		ReverseNum *= 10;
		ReverseNum += Remainder;
	}
	return ReverseNum;
}
bool  IsPalindromeNumber(int Num) {
	return Num == ReverseDigitsOfNumber(Num);
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num;
	Num = ReadPositiveNumber("ENTER POSITIVE NUMBER: ");
	PrintResult(IsPalindromeNumber(Num));
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
