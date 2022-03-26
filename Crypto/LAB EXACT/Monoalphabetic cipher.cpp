//Mono alphabetic cipher

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;
int main()
{
    char pt[30] ,c[27], ct[30];
    int i, j, index;
    //clrscr();
    cout<<"\nImplement Monoalphabetic Cipher "<<endl;
//    printf("\n\nImplement Mono Alphabetic Cipher Encryption-Decryption.");
   cout<<"\nEnter the Plain Text : "<<endl;
   // printf("\nEnter Plain Text : ");
    gets(pt);

    cout<<"\nEnter Key From a to z :";
    for(i = 0; i < 26; i++)
    {
        //printf("%c-", i + 97);
        cout<<char(i+97)<<"-";
        c[i] = getch();
        cout<<c[i]<<" ";
        //printf("%c , ", c[i]);
    }

    for(i = 0; i < strlen(pt); i++)
    {
        index = pt[i] - 97;
        ct[i] = c[index];
    }
	cout<<"\n\nCipher Text is : ";
//    printf("\n\nCipher Text is : ");
    for(i = 0; i < strlen(pt); i++)
    {
        cout<<ct[i];
//		printf("%c", ct[i]);
    }
    getch();
    return 0;
}
