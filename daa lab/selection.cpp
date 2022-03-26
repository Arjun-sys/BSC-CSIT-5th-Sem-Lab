#include<iostream>
using namespace std;
int main()
{
	int i,j,a[20],n,l,m,temp;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the element of array"<<endl;
for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		m=a[i];
		l=i;
		for(j=i+1;j<n;j++)
		{
			if(m>a[j])
			{
				m=a[j];
				l=j;
				
			}
		}
		temp=a[i];
		a[i]=a[l];
		a[l]=temp;
		
	}
	cout<<"the sorted arry is"<<endl;
	for(i=0;i<n;i++)

		cout<<a[i]<<endl;;

	return 0;
}
