#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
 char a[100],c[100];
 int i,z,b,n;
 cout<<"Enter string:";
 cin.getline(a,256);
 b=strlen(a);
 cout<<"Enter the encryption key:";
 cin>>n;
 for(i=0;i<b;i++)
 {
 if(a[i]==' ')
 c[i]=a[i];
 else
 {
 c[i]=toupper(a[i]);
 c[i]=(c[i]+n)%90;
 }
 }
 cout<<"Encryption:"<<c;
 for(i=0;i<b;i++)
 {
 if(c[i]==' ')
 a[i]=c[i];
 else
 {
 a[i]=tolower(c[i]);
 a[i]=(a[i]-n)%122;
 }
 }
 cout<<endl<<"Decryption:"<<a;
 getch();
}
