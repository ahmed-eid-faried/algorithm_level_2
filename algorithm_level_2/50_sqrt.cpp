#include <iostream>
#include <string>
using namespace std;

float  ReadNumber(string Message) {
	float Num;
	cout << Message;
	cin >> Num;
	return  Num;
}
 
float MySqrt(float Num) {

	return pow(Num, 0.5);
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	float Num = ReadNumber("ENTER Number: ");
	cout << "============================================" << endl;
	cout << "My Floor Fun \t====>>>>> " << MySqrt(Num) << endl;
	cout << "C++ Floor Fun \t====>>>>> " << sqrt(Num) << endl;
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}