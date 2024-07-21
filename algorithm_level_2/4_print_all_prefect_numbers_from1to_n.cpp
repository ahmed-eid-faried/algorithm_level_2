//#include <iostream>
//using namespace std;
//
//int  ReadPositiveNumber(string Message) {
//	int Num;
//	do {
//		cout << Message;
//		cin >> Num;
//	} while (Num < 0);
//	return Num;
//}
//void PrintPrefectNumber(bool PrefectState, int Num) {
//
//	if (PrefectState) {
//		cout << "---------------------------\n";
//		cout << "PrefectState ===>>>> \t" << PrefectState;
//		cout << " \t" << Num << " Is Perfect Number.\n";
//	}
//	//else {cout << " \t" << Num << " Is NOT Perfect Number.\n";	}
//}
//
//
//
//bool CheckPrefectNumber(int Num) {
//	int Sum = 0;
//	for (int i = 1; i < Num; i++) {
//		if (Num % i == 0) {
//			Sum += i;
//		}
//	}
//	return Sum == Num;
//}
//
//
//void PrintAllPrefectNumbersFrom1toN(int Num) {
//	for (int i = 1; i <= Num; i++) {
//		PrintPrefectNumber(CheckPrefectNumber(i), i);
//	}
//}
//
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	int Num;
//	Num = ReadPositiveNumber("ENTER POSITIVE NUMBER: ");
//	PrintAllPrefectNumbersFrom1toN(Num);
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
