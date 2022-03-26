#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,j,temp;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the elements of array";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}}
	}
	cout<<"array after the bubble sort";
	for(i=0;i<n;i++)
	cout<<" "<<a[i];
	return 0;
	
}
