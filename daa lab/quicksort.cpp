#include<iostream>
using namespace std;

void quicksort(int x[],int first,int last)
{
	int pivot,l,temp,r;
	if(first<last)
	{
	pivot=first;
	l=first;
	r=last;
	while(l<r)
	{
		while(x[l++]<=x[pivot]&&l<last)
		while(x[r--]>x[pivot])
		if(l<r)
		{
			temp=x[l];
			x[l]=x[r];
			x[r]=temp;}}
		
			temp=x[pivot];
			x[pivot]=x[r];
			x[r]=temp;
			quicksort(x,first,r-1);
			quicksort(x,r+1,last);
		}
	}
	
int main()
{
	int x[200],n,i;
	cout<<"enter the size of aary";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
		cin>>x[i];
	quicksort(x,0,n-1);
	cout<<"the sorted elements";
	for(i=0;i<n;i++)
		cout<<x[i];
	return 0;
}
