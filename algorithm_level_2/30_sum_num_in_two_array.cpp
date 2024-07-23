//#include <iostream>
//#include <string>
//using namespace std;
//enum enPrimeOrNotPrime { Prime = 1, NotPrime = 0 };
//
//int  ReadPositiveNumber(string Message) {
//	int Num;
//	do {
//		cout << Message;
//		cin >> Num;
//	} while (Num < 0);
//	return  Num;
//}
//int RandomNumber(int From, int To) {
//	return (rand() % (To - From + 1)) + From;
//}
//void PrintArray(int Array[100], short Num, string Message = "Original Array") {
//	cout << Message << ": \t";
//	if (Num > 100)Num = 100;
//	for (int i = 0; i < Num; i++)
//	{
//		cout << Array[i] << " ";
//	}
//	cout << endl;
//}
//void FillArrayByRandomNum(int Array[100], short  Num) {
//	if (Num > 100)Num = 100;
//	for (short i = 0; i < Num; i++)
//	{
//		Array[i] = RandomNumber(0, 100);
//	}
//}
//void SumNumInTwoArray(int SumArray[100], int Array1[100], int  Array2[100], short ArrLength) {
//	if (ArrLength > 100)ArrLength = 100;
//	for (short i = 0; i < ArrLength; i++)
//	{
//		SumArray[i] = Array1[i] + Array2[i];
//	}
//
//}
//
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	srand((unsigned)time(NULL));
//	int Array1[100];
//	int  Array2[100];
//	int  SumArray[100];
//	short int ArrLength;
//	ArrLength = ReadPositiveNumber("ENTER LENGTH OF TWO ARRAYS: ");
//	cout << "============================================" << endl;
//	FillArrayByRandomNum(Array1, ArrLength);
//	PrintArray(Array1, ArrLength, "Array1: ");
//	cout << "============================================" << endl;
//	FillArrayByRandomNum(Array2, ArrLength);
//	PrintArray(Array2, ArrLength, "Array2: ");
//	cout << "============================================" << endl;
//	SumNumInTwoArray(SumArray, Array1, Array2, ArrLength);
//	PrintArray(SumArray, ArrLength, "SumArray: ");
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
//
//
