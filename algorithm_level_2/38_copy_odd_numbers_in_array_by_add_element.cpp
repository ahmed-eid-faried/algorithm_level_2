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
	return (rand() % (To - From + 1)) + From;
}
void FillArrayByRandomNum(int Array[100], short  Num) {
	for (short i = 0; i < Num; i++)
	{
		Array[i] = RandomNumber(0, 100);
	}
}
void AddElementToSimiDynamicArray(short  Num, int Array[100], short& ArrLength) {
	ArrLength++;
	Array[ArrLength - 1] = Num;
}

void PrintArray(int Array[100], short Num, string Message = "Original Array") {
	cout << Message << ": \t";
	if (Num > 100)Num = 100;
	for (int i = 0; i < Num; i++)
	{
		cout << Array[i] << " ";

	}
	cout << endl;
}

void CopyOddNumInArrayByAddElement(int Array[100], short ArrLength, int CopyedArray[100], short& CopyedArrLength) {
	for (short i = 0; i < ArrLength; i++)
	{
		if (Array[i] % 2 != 0) {
			AddElementToSimiDynamicArray(Array[i], CopyedArray, CopyedArrLength);
		}
	}
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	srand((unsigned)time(NULL));
	int Array[100];
	int CopyedArray[100];
	short ArrLength = ReadPositiveNumber("ENTER LENGTH OF ARRAY: ");
	short CopyedArrLength = 0;
	if (ArrLength > 100)ArrLength = 100;
	cout << "============================================" << endl;
	FillArrayByRandomNum(Array, ArrLength);
	PrintArray(Array, ArrLength, "Original Array");
	cout << "============================================" << endl;
	CopyOddNumInArrayByAddElement(Array, ArrLength, CopyedArray, CopyedArrLength);
	PrintArray(CopyedArray, CopyedArrLength, "Copy Array");
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}


