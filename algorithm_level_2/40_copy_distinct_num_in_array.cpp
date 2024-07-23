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
//
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
//void CopyDistinctNumInArray(int Array[100], short ArrLength, int CopyedArray[100], short& CopyedArrLength) {
//	for (short i = 0; i < ArrLength; i++)
//	{
//		if (!IsNumberInArray(CopyedArray, ArrLength, Array[i])) {
//			AddElementToSimiDynamicArray(Array[i], CopyedArray, CopyedArrLength);
//		}
//	}
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	srand((unsigned)time(NULL));
//	int Array[100];
//	int CopyedArray[100];
//	short ArrLength = 0;
//	short CopyedArrLength = 0;
//	if (ArrLength > 100)ArrLength = 100;
//	cout << "============================================" << endl;
//	FillSimiDynamicArray(Array, ArrLength);
//	PrintArray(Array, ArrLength, "Original Array");
//	cout << "============================================" << endl;
//	CopyDistinctNumInArray(Array, ArrLength, CopyedArray, CopyedArrLength);
//	PrintArray(CopyedArray, CopyedArrLength, "Copy Distinct Numbers In Array");
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
//
//
