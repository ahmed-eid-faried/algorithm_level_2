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
//	return (rand() % (To - From)) + From;
//}
//
//void PrintArray(int Array[100], short Num) {
//	cout << "Original Array: \t";
//	if (Num > 100)Num = 100;
//	int MinNum = 0;
//	for (int i = 0; i < Num; i++)
//	{
//		cout << Array[i] << " ";
//
//	}
//	cout << endl;
//}
//
//void MinNumInArray(int Array[100], short Num) {
//	if (Num > 100)Num = 100;
//	int MinNum = Array[0];
//	for (int i = 0; i < Num; i++)
//	{
//		if (MinNum > Array[i])MinNum = Array[i];
//
//	}
//	cout << "MinNum: " << MinNum << endl;
//}
//void FillArrayByRandomNum(int Array[100], short& Num) {
//	Num = ReadPositiveNumber("ENTER LENGTH OF ARRAY: ");
//	if (Num > 100)Num = 100;
//	for (short i = 0; i < Num; i++)
//	{
//		Array[i] = RandomNumber(0, 100);
//	}
//}
//
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	srand((unsigned)time(NULL));
//	int Array[100];
//	short ArrLength;
//	FillArrayByRandomNum(Array, ArrLength);
//	cout << "============================================" << endl;
//	PrintArray(Array, ArrLength);
//	MinNumInArray(Array, ArrLength);
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
//
//
