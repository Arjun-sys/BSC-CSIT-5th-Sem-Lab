//RSA algorithm
/*Algorithm Begin
   1. Choose two prime numbers p and q.
   2. Compute n = p*q.
   3. Calculate phi = (p-1) * (q-1).
   4. Choose an integer e such that 1 < e < phi(n) and gcd(e, phi(n)) = 1; i.e., e and phi(n) are coprime.
   5. Calculate d as d = e-1 (mod phi(n)); here, d is the modular multiplicative inverse of e modulo phi(n).
   6. For encryption, c = me mod n, where m = original message.
   7. For decryption, m = c d mod n.
End*/

#include<iostream>
#include<math.h>
using namespace std;
// find gcd
int gcd(int a, int b) {
   int t;
   while(1) {
      t= a%b;
      if(t==0)
      return b;
      a = b;
      b= t;
   }
}
int main() {
double p,q,e,n,phi,track;
   cout<<"Select prime numbers p and q:";
   cin>>p>>q;
   cout<<"Select the value of e:";
   cin>>e;
    n=p*q;//calculate n
  phi= (p-1)*(q-1);//calculate phi
   //public key
   //e stands for encrypt
   //for checking that 1 < e < phi(n) and gcd(e, phi(n)) = 1; i.e., e and phi(n) are coprime.
   while(e<phi) {
     track = gcd(e,phi);
      if(track==1)
         break;
      else
         e++;
   }
   //private key
   //d stands for decrypt
   //choosing d such that it satisfies d*e = 1 mod phi
   double d=fmod(1/e,phi);
   double message ;
   cout<<"Enter the message to encrypt:";
   cin>>message;
   double c = pow(message,e); //encrypt the message
   double m = pow(c,d);
   c=fmod(c,n);
   m=fmod(m,n);
   cout<<"\n"<<"Encrypted message :"<<c;
   cout<<"\n"<<"Decrypted message :"<<m;
   return 0;
}
