//#include <iostream>
//#include <string>
//using namespace std;
//
//float  ReadNumber(string Message) {
//	float Num;
//	cout << Message;
//	cin >> Num;
//	return  Num;
//}
//float GetFraction(float Num) {
//	return Num - (int)Num;
//}
//
//int MyCeilRound(float Num) {
//	int intgerPart = (int)Num;
//	if (Num > 0) {
//		return abs(intgerPart) + 1;
//	}
//	else {
//		return  intgerPart - 1;
//	}
//}
//int MyFloorRound(float Num) {
//	int intgerPart = (int)Num;
//	if (Num >= 0) {
//		return intgerPart;
//	}
//	else {
//		return  intgerPart;
//	}
//}
//int MyRound(float Num) {
//	int intgerPart = (int)Num;
//	if (abs(GetFraction(Num)) > 0) {
//		if (abs(GetFraction(Num)) >= 0.5) {
//			return MyCeilRound(Num);
//		}
//		else {
//			return MyFloorRound(Num);
//		}
//	}
//	else {
//		return Num;
//	}
//}
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//	float Num = ReadNumber("ENTER Number: ");
//	cout << "============================================" << endl;
//	cout << "My Round Fun \t====>>>>> " << MyRound(Num) << endl;
//	cout << "C++ Round Fun \t====>>>>> " << round(Num) << endl;
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}