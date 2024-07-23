#include <iostream>
#include <string>
using namespace std;

float  ReadNumber(string Message) {
	float Num;
	cout << Message;
	cin >> Num;
	return  Num;
}
float GetFraction(float Num) {
	return Num - (int)Num;
}
int MyCeil(float Num) {

	int intgerPart = (int)Num;
	if (abs(GetFraction(Num)) > 0 || Num == 0) {
		if (Num > 0) {
			return abs((int)Num) + 1;
		}
		else {
			return  (int)Num;
		}
	}
	else {
		return Num;
	}
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	float Num = ReadNumber("ENTER Number: ");
	cout << "============================================" << endl;
	cout << "My Ceil Fun \t====>>>>> " << MyCeil(Num) << endl;
	cout << "C++ Ceil Fun \t====>>>>> " << ceil(Num) << endl;
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}