//#include <iostream>
//#include <string>
//using namespace std;
//string  ReadString(string Message) {
//	string Text;
//	cout << Message;
//	cin >> Text;
//	return  Text;
//}
//bool GuessPassword(string CorrectPassword) {
//	string word = "";
//	int Trials = 0;
//	for (int i = 65; i <= 90; i++)
//	{
//		for (int j = 65; j <= 90; j++)
//		{
//			for (int k = 65; k <= 90; k++)
//			{
//				word += char(i);
//				word += char(j);
//				word += char(k);
//				Trials++;
//				cout << "Trial [" << Trials << "]: " << word << endl;
//
//				if ((CorrectPassword == word)) {
//					cout << "-----------------------------------------------" << endl;
//					cout << "-----------------------------------------------" << endl;
//					cout << "PASSWORD IS " << word << endl;
//					cout << "FOUND AFTER  " << Trials << " Trial(s)" << endl;
//					return true;
//				}
//				word = "";
//			}
//
//		}
//
//	}
//}
//
//int main() {
//	cout << "########################################################\n";
//	cout << "#####################-by-ahmed-mady-####################\n";
//	cout << "########################################################\n";
//
//	GuessPassword(ReadString("ENDER CORRECT PASSWORD TO Guess IT: "));
//	cout << "########################################################\n";
//	cout << "########################################################\n";
//	return 0;
//}
//
//
