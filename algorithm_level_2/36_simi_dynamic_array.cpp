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
//void AddElementToSimiDynamicArray(short  Num, int Array[100], short& ArrLength) {
//	ArrLength++;
//	Array[ArrLength - 1] = Num;
//}
//void FillSimiDynamicArray(int Array[100], short& ArrLength) {
//	int IsFinish; //bool IsFinish to valid input
//	for (short i = 0; i < 100; i++)
//	{
//		AddElementToSimiDynamicArray(ReadPositiveNumber("Please enter a number? "), Array, ArrLength);
//		cout << "Do you want to add more numbers? [0]:No,[1]Yes? ";
//		cin >> IsFinish;
//		if (IsFinish != 1)break;
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
//
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	srand((unsigned)time(NULL));
//	int Array[100];
//	short ArrLength = 0;
//	FillSimiDynamicArray(Array, ArrLength);
//	cout << "============================================" << endl;
//	cout << "Array Length: " << ArrLength << endl;
//	PrintArray(Array, ArrLength);
//	cout << "============================================" << endl;
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
//
//
