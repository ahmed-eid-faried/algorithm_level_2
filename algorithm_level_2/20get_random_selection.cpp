//#include <iostream>
//#include <string>
//using namespace std;
//enum enDigit { SmallLetter = 1, CapitalLetter = 2, Digit = 3, SpecialCharacter = 4, };
//int  ReadPositiveNumber(string Message) {
//	int Num;
//	do {
//		cout << Message;
//		cin >> Num;
//	} while (Num < 0);
//	return  Num;
//}
//int RandomNumber(int From, int To) {
//	return (rand() % (To - From)) + From;
//}
//enDigit SelectTypeCharacter() {
//	cout << "Select Type Character TO Get Random: " << endl;
//	cout << "(1) SmallLetter" << endl;
//	cout << "(2) CapitalLetter" << endl;
//	cout << "(3) Digit" << endl;
//	cout << "(4) SpecialCharacter" << endl;
//	cout << "########################################################\n";
//	return	(enDigit)ReadPositiveNumber("ENTER SELECTION: ");
//}
//int GetRandomSelection(enDigit Selection) {
//	switch (Selection)
//	{
//	case enDigit::SmallLetter:
//		return RandomNumber(97, 122);
//	case enDigit::CapitalLetter:
//		return RandomNumber(65, 90);
//	case enDigit::Digit:
//		return RandomNumber(48, 57);
//	case enDigit::SpecialCharacter:
//		return RandomNumber(33, 47);
//	default:
//		return RandomNumber(58, 64);
//	}
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	srand((unsigned)time(NULL));
//	//cout << RandomNumber(0, 100) << endl;
//	int Char = GetRandomSelection(SelectTypeCharacter());
//	cout << char(Char) << endl;
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
//
//
