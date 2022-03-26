#include<stdio.h>
#include<conio.h>
#include<string.h>
char mssg[100];
int k[][3] = { {17,17,5},
 {21,18,21},
{2,2,19}
 };
int ki[][3] = { {4,9,15},
 {15,17,6},
 {24,0,17}
 };
int c[8];
int p[8];
void get_mssg()
{
 printf("\n Enter the Plaintext (in caps): ");
 gets(mssg);
}
void multiply()
{
 for(int i=0;i<3;i++)
 {
 p[i] = 0;
 for(int j=0;j<3;j++)
 p[i] += c[j]*k[i][j];
 p[i] %= 26;
 }
}
void multiply2()
{
 for(int i=0;i<3;i++)
 {
 c[i] = 0;
 for(int j=0;j<3;j++)
 c[i] += p[j]*ki[i][j];
 c[i] %= 26;
 }
}
void en_mssg()
{
 int i = 0;
 while(i < strlen(mssg))
 {
 c[0] = mssg[i]-65;
 if(mssg[i+1] == '\0')
 c[1] = c[2] = 0;
 else
 {
 c[1] = mssg[i+1]-65;
 if(mssg[i+2] == '\0')
 c[2] = 0;
 else
 c[2] = mssg[i+2]-65;
 }
 multiply();
 int l =0;
 while(i<strlen(mssg) && l<3)
 mssg[i++] = p[l++]+65;
 }
 printf("\n The Ciphertext is : ");
 puts(mssg);
}
void de_mssg()
{
 int i = 0;
 while(i < strlen(mssg))
 {
 p[0] = mssg[i]-65;
 if(mssg[i+1] == '\0')
 p[1] = p[2] = 0;
 else
 {
 p[1] = mssg[i+1]-65;
 if(mssg[i+2] == '\0')
 p[2] = 0;
 else
 p[2] = mssg[i+2]-65;
 }
 multiply2();
 int l =0;
 while(i<strlen(mssg) && l<3)
 mssg[i++] = c[l++]+65;
 }
 printf("\n The Decrypted Plaintext is : ");
 puts(mssg);
}
int main()
{
 get_mssg();
 en_mssg();
 de_mssg();
 getch();
 return 0;
}

