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
int  CheckRepeatedNumInArray(int Array[100], int DigitToCheck) {
	int NumOfFrequency = 0;
	for (int i = 0; i < 5; i++) {
		if (DigitToCheck == Array[i])NumOfFrequency++;
	}
	return NumOfFrequency;
}
void ReadArray(int Array[100], short& Num) {
	string Title = "";
	Num = ReadPositiveNumber("ENTER LENGTH OF ARRAY: ");
	cout << "Element Array Elements: \n";
	if (Num > 100)Num = 100;
	for (int i = 0; i < Num; i++)
	{
		Title = "Element [" + to_string(i + 1) + "]: ";
		Array[i] = ReadPositiveNumber(Title);
	}
}
void PrintArray(int Array[100], short Num) {
	cout << "Original Array: \t";
	if (Num > 100)Num = 100;
	for (int i = 0; i < Num; i++)
	{
		cout << Array[i] << " ";

	}
	cout << endl;
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	srand((unsigned)time(NULL));
	int Array[100];
	short ArrLength;
	ReadArray(Array, ArrLength);
	int DigitToCheck = ReadPositiveNumber("ENTER Num to check: ");
	int NumOfFrequency = CheckRepeatedNumInArray(Array, DigitToCheck);
	cout << "============================================" << endl;
	PrintArray(Array, ArrLength);
	cout << "Num \t" << DigitToCheck << " is repeated \t" << NumOfFrequency << " times" << endl;
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}


