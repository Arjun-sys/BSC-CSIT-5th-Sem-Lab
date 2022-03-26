//Play fair cipher
// C++ program to implement Playfair Cipher 

#include<iostream>
#include<conio.h>
//#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

#define SIZE 30 
using namespace std;
// Function to convert the string to lowercase 
void toLowerCase(char plain[], int ps) 
{ 
	int i; 
	for (i = 0; i < ps; i++) { 
		if (plain[i] > 64 && plain[i] < 91) 
			plain[i] += 32; 
	} 
} 

// Function to remove all spaces in a string 
int removeSpaces(char* plain, int ps) 
{ 
	int i, a[4]; 

	for (i = 0; i < ps; i += 2) { 

search(keyT ,str[i], str[i + 1], a);

		if (a[0] == a[2]) { 
			str[i] = keyT[a[0]][mod5(a[1] + 1)]; 
			str[i + 1] = keyT[a[0]][mod5(a[3] + 1)]; 
		} 
		else if (a[1] == a[3]) { 
			str[i] = keyT[mod5(a[0] + 1)][a[1]]; 
			str[i + 1] = keyT[mod5(a[2] + 1)][a[1]]; 
		} 
		else { 
			str[i] = keyT[a[0]][a[3]]; 
			str[i + 1] = keyT[a[2]][a[1]]; 
		} 
	} 
} 

// Function to encrypt using Playfair Cipher 
void encryptpf(char str[], char key[]) 
{ 
	char ps, ks, keyT[5][5]; 

	// Key 
	ks = strlen(key); 
	ks = removeSpaces(key, ks); 
	toLowerCase(key, ks); 

	// Plaintext 
	ps = strlen(str); 
	toLowerCase(str, ps); 
	ps = removeSpaces(str, ps); 

	ps = prepare(str, ps); 

	generateKeyTable(key, ks, keyT); 

	encrypt(str, keyT, ps);  
} 

// Driver code 
int main() 
{ 
	char str[SIZE], key[SIZE]; 
	cout<<"Give the Key value"<<endl;
	cin>>key;
	
	cout<<"Give the Text"<<endl;
	cin>>str;

	/*// Key to be encrypted 
	strcpy(key, "Prabal"); 
	printf("Key text: %s\n", key); 

	// Plaintext to be encrypted 
	strcpy(str, "cryptography teacher is too bad"); 
	printf("Plain text: %s\n", str); 
*/
	// encrypt using Playfair Cipher 
	encryptpf(str, key); 

	printf("Cipher text: %s\n", str); 

	return 0; 
} 

// This code is contributed by AbhayBhat 

