//#include <iostream>
//#include <string>
//using namespace std;
//enum enDigit { SmallLetter = 1, CapitalLetter = 2, Digit = 3, SpecialCharacter = 4, };
//
//int  ReadPositiveNumber(string Message) {
//	int Num;
//	do {
//		cout << Message;
//		cin >> Num;
//	} while (Num < 0);
//	return  Num;
//}
//
//int RandomNumber(int From, int To) {
//	return (rand() % (To - From+1)) + From;
//}
//
//void PrintArray(int Array[100], short Num, string Message = "Original Array") {
//	cout << Message << ": \t";
//	if (Num > 100)Num = 100;
//	for (int i = 0; i < Num; i++)
//	{
//		cout << Array[i] << " ";
//	}
//	cout << endl;
//}
//
//void FillArrayByRandomNum(int Array[100], short& Num) {
//	Num = ReadPositiveNumber("ENTER LENGTH OF ARRAY: ");
//	if (Num > 100)Num = 100;
//	for (short i = 0; i < Num; i++)
//	{
//		Array[i] = RandomNumber(0, 100);
//	}
//}
//
//void CopyArrayFun(int Array[100], short ArrLength,
//	int CopyArray[100]) {
//	if (ArrLength > 100)ArrLength = 100;
//	for (short i = 0; i < ArrLength; i++)
//	{
//		CopyArray[i] = Array[i];
//	}
//}
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	srand((unsigned)time(NULL));
//	int Array[100];
//	int CopyArray[100];
//	short ArrLength;
//	FillArrayByRandomNum(Array, ArrLength);
//	cout << "============================================" << endl;
//	CopyArrayFun(Array, ArrLength, CopyArray);
//	PrintArray(Array, ArrLength, "Original Array");
//	cout << "============================================" << endl;
//	PrintArray(CopyArray, ArrLength, "Copy Array");
//	//cout << "AvarageArray: " << AvarageArray(Array, ArrLength) << endl;
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
//
//
