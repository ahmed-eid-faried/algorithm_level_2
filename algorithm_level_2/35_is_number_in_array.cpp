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
//	return (rand() % (To - From + 1)) + From;
//}
//
//
//void FillArrayByRandomNum(int Array[100], short  Num) {
//	for (short i = 0; i < Num; i++)
//	{
//		Array[i] = RandomNumber(0, 100);
//	}
//}
//void PrintArray(int Array[100], short Num) {
//	cout << "Original Array: \t";
//	if (Num > 100)Num = 100;
//	for (int i = 0; i < Num; i++)
//	{
//		cout << Array[i] << " ";
//
//	}
//	cout << endl;
//}
//short SearchNumInArray(int Array[100], short ArrLength, int NumSearch) {
//	for (int i = 0; i < ArrLength; i++)
//	{
//		if (Array[i] == NumSearch) {
//			return  i;
//		}
//	}
//	return  -1;//not found
//}
//bool IsNumberInArray(int Array[100], short ArrLength, int NumSearch) {
//	return SearchNumInArray(Array, ArrLength, NumSearch) != -1;
//}
//void PrintResultSearchNumInArr(int NumSearch, bool IsFound) {
//	if (IsFound) {
//		cout << "Number you are looking for is: " << NumSearch << endl;
//		cout << "The number is not found:-)" << endl;
//
//	}
//	else {
//		cout << "Number you are looking for is: " << NumSearch << endl;
//		cout << "The number is not found:-(" << endl;
//
//	}
//}
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	srand((unsigned)time(NULL));
//	int Array[100];
//	short ArrLength = ReadPositiveNumber("ENTER LENGTH OF ARRAY: ");
//	if (ArrLength > 100)ArrLength = 100;
//	FillArrayByRandomNum(Array, ArrLength);
//	cout << "============================================" << endl;
//	PrintArray(Array, ArrLength);
//	cout << "============================================" << endl;
//	int NumSearch = ReadPositiveNumber("ENTER A NUMBER TO SEARCH FOR?\n");
//	PrintResultSearchNumInArr(NumSearch, IsNumberInArray(Array, ArrLength, NumSearch));
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
//
//
