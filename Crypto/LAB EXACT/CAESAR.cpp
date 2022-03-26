#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
string encrypt(string text, int s)
{
	string result = "";
	for (int i=0;i<text.length();i++)
	{
		if (isupper(text[i]))
			result += char(int(text[i]+s-65)%26 +65);

        else
            result += char(int(text[i]+s-97)%26 +97);
	}
	return result;
}
string decrypt(string text, int s)
{
    string result = "";
	for (int i=0;i<text.length();i++)
	{
		if (isupper(text[i]))
			result += char(int(text[i]-s-65)%26 +65);
        else
            result += char(int(text[i]-s-97)%26 +97);
	}
	return result;
}
int main() {
     int key;
      string msg,msg1,msg2;
       cout<<"Enter the message:";
     cin >> msg; //take the message as input
     cout << "\nEnter the key(0-25): ";
       cin >> key; //take the key as input
       key%=26;
      msg1 = encrypt(msg, key);
          cout << "\nEncrypted Cipher text :"<<msg1;
          msg2 = decrypt(msg1, key);
          cout << "\n Decrypted Plain text:"<<msg2;  
    return 0;
}
