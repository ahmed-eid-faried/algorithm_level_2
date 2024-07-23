//#include <iostream>
//#include <string>
//using namespace std;
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
//void FillArrayByRandomNum(int Array[100], short  Num) {
//	for (short i = 0; i < Num; i++)
//	{
//		Array[i] = RandomNumber(-100, 100);
//	}
//}
//void PrintArray(int Array[100], short Num, string Message = "Original Array") {
//	cout << Message << ": \t";
//	if (Num > 100)Num = 100;
//	for (int i = 0; i < Num; i++)
//	{
//		cout << Array[i] << " ";
//
//	}
//	cout << endl;
//}
//
//int CountNegativeNumbersInArray(int Array[100], short ArrLength) {
//	int Counter = 0;
//	for (short i = 0; i < ArrLength; i++)
//	{
//		if (Array[i] < 0) {
//			Counter++;
//		}
//	}
//	return (int)Counter;
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	srand((unsigned)time(NULL));
//	int Array[100];
//	short ArrLength = ReadPositiveNumber("ENTER LENGTH OF ARRAY: ");
//	cout << "============================================" << endl;
//	FillArrayByRandomNum(Array, ArrLength);
//	PrintArray(Array, ArrLength, "Original Array");
//	cout << "============================================" << endl;
//	cout << "Count Negative Numbers In Array: \t" <<
//		CountNegativeNumbersInArray(Array, ArrLength) << endl;
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
//
//
