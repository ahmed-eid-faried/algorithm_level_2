#include <iostream>
#include <string>
using namespace std;

int  ReadPositiveNumber(string Message) {
	int Num;
	cout << Message;
	cin >> Num;
	return  Num;
}
int MyAbs(int Num) {
	if (Num > 0) {
		return Num;
	}
	else {
		return Num * -1;

	}
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num = ReadPositiveNumber("ENTER Number: ");
	cout << "============================================" << endl;
	cout << "My Abs Fun ====>>>>> " << MyAbs(Num) << endl;
	cout << "C++ Abs Fun ====>>>>> " << MyAbs(Num) << endl;
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}