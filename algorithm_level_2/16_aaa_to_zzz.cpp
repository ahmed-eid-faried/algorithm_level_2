//#include <iostream>
//#include <string>
//using namespace std;
//
//void PrintAllLettersAAAtoZZZ() {
//	for (int i = 65; i <= 90; i++)
//	{
//		for (int j = 65; j <= 90; j++)
//		{
//			for (int k = 65; k <= 90; k++)
//			{
//				cout << char(i) << char(j) << char(k) << endl;
//			}
//			cout << "-----------------------------------------------" << endl;
//
//		}
//		cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
//
//	}
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//
//	PrintAllLettersAAAtoZZZ();
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
//
//
//// Function to print all combinations from AAA to ZZZ
//void PrintAllLettersAAAtoZZZSoln2() {
//	for (int num = 0; num < 26 * 26 * 26; ++num) {
//		char first = 'A' + (num / (26 * 26)) % 26;
//		char second = 'A' + (num / 26) % 26;
//		char third = 'A' + num % 26;
//		cout << first << second << third << endl;
//
//		if (num % 26 == 25) {
//			cout << "-----------------------------------------------" << endl;
//		}
//
//		if (num % (26 * 26) == (26 * 26) - 1) {
//			cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
//		}
//	}
//}