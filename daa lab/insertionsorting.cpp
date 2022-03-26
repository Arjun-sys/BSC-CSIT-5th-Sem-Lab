#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp,a[100];
	cout<<"Enter the size of array";
	cin>>n;
	cout<<"Enter the element of array";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i;
		while(j>0&&temp<a[j-1])
		{
			a[j]=a[j-1];
			j=j-1;
			
		}
		a[j]=temp;
	}
	cout<<"The sorted array is";
	for(i=0;i<n;i++)
	cout<<a[i];
	return 0;
	
}
