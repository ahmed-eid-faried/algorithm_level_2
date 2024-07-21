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
//void PrintDigit(int Digit) {
//	cout << "Digit ===>>>> \t" << Digit << endl;
//}
//void  ReverseDigitsOfNumber(int Num) {
//	int Remainder = 0;
//	int ReverseNum = 0;
//	while (Num > 0) {
//		Remainder = Num % 10;
//		Num = Num / 10;
//		PrintDigit(Remainder);
//		ReverseNum *= 10;
//		ReverseNum += Remainder;
//	}
//	cout << "============================================" << endl;
//	cout << "Reverse Of Number:  \t" << ReverseNum << endl;
//
//}
//
//
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	int Num;
//	Num = ReadPositiveNumber("ENTER POSITIVE NUMBER: ");
//	ReverseDigitsOfNumber(Num);
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
