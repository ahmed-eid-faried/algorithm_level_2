#include <iostream>
using namespace std;
enum enPrimeStatus { Prime, NotPrime };

int  ReadPositiveNumber(string Message) {
	int Num;
	do {
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}
void PrintPrimeNumber(enPrimeStatus  PrimeStatus, int Num) {
	if (PrimeStatus == enPrimeStatus::Prime) {
		cout << "---------------------------\n";
		cout << "Prime: " << Num << endl;
	}
	else {
		//cout << "Not Prime: " << Num << endl;
		cout << "";
	}
}
bool CheckEvenNumber(int Num) {
	return Num % 2 == 0 || Num == 0;
}
bool CheckNumberIs1or2(int Num) {
	return(Num == 1 || Num == 2);
}
enPrimeStatus CheckPrimeNumber(int Num) {
	if (CheckNumberIs1or2(Num)) {
		return enPrimeStatus::Prime;

	}
	else
		if (CheckEvenNumber(Num)) {
			return enPrimeStatus::NotPrime;
		}
		else
		{

			for (int i = 2; i < ceil(Num / 2); i++) {
				if (Num % i == 0) {
					return enPrimeStatus::NotPrime;
				}
			}
			return enPrimeStatus::Prime;
		}
}
void PrintAllPrimeNumbersFromNto1(int Num) {
	for (int i = 0; i < Num; i++)
	{
		PrintPrimeNumber(CheckPrimeNumber(i), i);
	}
}

int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	int Num;
	Num = ReadPositiveNumber("ENTER POSITIVE NUMBER: ");
	PrintAllPrimeNumbersFromNto1(Num);
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}
