#include <iostream>
#include <string>
using namespace std;
string  ReadString(string Message) {
	string Text;
	cout << Message;
	//cin >> Text;
	getline(cin, Text);
	return  Text;
}
string EncryptText(string InputText, short EncryptionKey) {
	string word = "";
	for (int i = 0; i < InputText.length(); i++)
	{
		word += InputText[i] + char(i + EncryptionKey);
		//word += char((int)InputText[i] + EncryptionKey);

	}
	return  word;
}
string DecryptText(string EncryptedText, short EncryptionKey) {
	string word = "";
	for (int i = 0; i < EncryptedText.length(); i++)
	{
		word += EncryptedText[i] - char(i + EncryptionKey);
		//word += char((int)EncryptedText[i] - EncryptionKey);

	}
	return  word;
}
int main() {
	cout << "########################################################\n";
	cout << "#####################-by-ahmed-mady-####################\n";
	cout << "########################################################\n";
	string InputText = ReadString("ENDER InputText TO Encryption: ");
	short EncryptionKey = 4;
	string	Encryption = EncryptText(InputText, EncryptionKey);
	string	Decryption = DecryptText(Encryption, EncryptionKey);
	cout << "########################################################\n";
	cout << "Text Before Encryption: " << InputText << endl;
	cout << "Text After Encryption: " << Encryption << endl;
	cout << "Text After Decryption: " << Decryption << endl;
	cout << "########################################################\n";
	cout << "########################################################\n";
	return 0;
}


