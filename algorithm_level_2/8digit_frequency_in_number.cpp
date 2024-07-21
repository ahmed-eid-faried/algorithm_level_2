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
void PrintDigit(int Digit) {
	cout << "Digit ===>>>> \t" << Digit << endl;
}
void  DigitFrequencyInNumber(int Num, int DigitToCheck) {
	int Remainder = 0;
	int NumOfFrequency = 0;
	while (Num > 0) {
		Remainder = Num % 10;
		Num = Num / 10;
		PrintDigit(Remainder);
		if (DigitToCheck == Remainder)NumOfFrequency++;

	}
	cout << "============================================" << endl;
	cout << "Num Of Frequency:  \t" << NumOfFrequency << endl;

}



int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num, DigitToCheck;
	Num = ReadPositiveNumber("ENTER POSITIVE NUMBER: ");
	DigitToCheck = ReadPositiveNumber("ENTER POSITIVE Frequency Digit to check: ");
	DigitFrequencyInNumber(Num, DigitToCheck);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
