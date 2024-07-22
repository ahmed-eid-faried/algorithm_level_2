#include <iostream>
#include <string>
using namespace std;
enum enPrimeOrNotPrime { Prime = 1, NotPrime = 0 };

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
void PrintArray(int Array[100], short Num, string Message = "Original Array") {
	cout << Message << ": \t";
	if (Num > 100)Num = 100;
	for (int i = 0; i < Num; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}
void FillArrayByRandomNum(int Array[100], short& Num) {
	Num = ReadPositiveNumber("ENTER LENGTH OF ARRAY: ");
	if (Num > 100)Num = 100;
	for (short i = 0; i < Num; i++)
	{
		Array[i] = RandomNumber(0, 100);
	}
}

void PrintPrimeNumber(enPrimeOrNotPrime  PrimeStatus, int Num) {
	cout << "---------------------------\n";
	if (PrimeStatus == enPrimeOrNotPrime::Prime) {
		cout << "Prime: " << Num << endl;
	}
	else {
		cout << "Not Prime: " << Num << endl;
	}
}
bool CheckEvenNumber(int Num) {
	return Num % 2 == 0 || Num == 0;
}
bool CheckNumberIs1Or2(int Num) {
	return(Num == 1 || Num == 2);
}
enPrimeOrNotPrime CheckPrimeNumber(int Num) {
	if (CheckNumberIs1Or2(Num)) {
		return enPrimeOrNotPrime::Prime;

	}
	else
		if (CheckEvenNumber(Num)) {
			return enPrimeOrNotPrime::NotPrime;
		}
		else
		{
			for (int i = 2; i < ceil(Num / 2); i++) {
				if (Num % i == 0) {
					return enPrimeOrNotPrime::NotPrime;
				}
			}
			return enPrimeOrNotPrime::Prime;
		}
}

void CopyPrimeInArray(int Array[100], short ArrLength, int CopyArray[100],
	short& CopyArrLength) {
	if (ArrLength > 100)ArrLength = 100;
	short Counter = 0;
	for (short i = 0; i < ArrLength; i++)
	{
		if (CheckPrimeNumber(Array[i]) == enPrimeOrNotPrime::Prime)
		{
			CopyArray[Counter] = Array[i];
			Counter++;
		}
	}
	CopyArrLength = Counter;

}


int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	srand((unsigned)time(NULL));
	//int Array[100] = { 0,1,2,3,4,5,6,7,8,9 };
	//short ArrLength = 10;
	//Prime Array : 1 2 3 5 7
	int Array[100];
	short int ArrLength;
	int CopyArray[100];
	short CopyArrLength;
	FillArrayByRandomNum(Array, ArrLength);
	cout << "============================================" << endl;
	CopyPrimeInArray(Array, ArrLength, CopyArray, CopyArrLength);
	PrintArray(Array, ArrLength, "Original Array");
	cout << "============================================" << endl;
	PrintArray(CopyArray, CopyArrLength, "Prime Array");


	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}


