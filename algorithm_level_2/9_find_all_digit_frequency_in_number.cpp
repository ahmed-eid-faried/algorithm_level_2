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
		if (DigitToCheck == Remainder)NumOfFrequency++;
	}
	if (NumOfFrequency > 1) {
		cout << "============================================" << endl;
		cout << "Num Of Frequency " << DigitToCheck << ":  \t" << NumOfFrequency << endl;
	}

}
void FindAllDigitFrequencyInNumber(int Num) {
	for (int i = 0; i < 10; i++)
	{
		DigitFrequencyInNumber(Num, i);
	}

}


int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num, DigitToCheck;
	Num = ReadPositiveNumber("ENTER POSITIVE NUMBER: ");
	cout << Num << endl;
	FindAllDigitFrequencyInNumber(Num);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
