#include<stdio.h>
#include<conio.h>
int s[10],x[10],d;
void sumofsub(int,int,int);
int main()
{
	int i, n,sum=0;
	printf("enter the size of set:");
	scanf("%d",&n);
	printf("\nEnter the set in increasing order:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&s[i]);
		
	}
	printf("\nEnter the value of d");
	scanf("%d",&d);
	for(i=1;i<=n;i++)
	sum+=s[i];
	if(sum<d||s[1]>d)
	printf("\n No subset possible");
	else
	sumofsub(0,1,sum);
	getch();
}
void sumofsub(int m,int k,int r)
{
	int i=1;
	x[k]=1;
	if((m+s[k])==d)
	{
		printf("subset");
		for(i=1;i<=k;i++)
		if(x[i]==1)
		printf("\t%d",s[i]);
		printf("\n");
		
	}
	else
	{
		if(m+s[k]+s[k+1]<=d)
		sumofsub(m+s[k],k+1,r-s[k]);
		if((m+r-s[k]>=d)&&(m+s[k+1]<=d))
		{
			x[k]=0;
			sumofsub(m,k+1,r-s[k]);
		}
	}
}
	
	

