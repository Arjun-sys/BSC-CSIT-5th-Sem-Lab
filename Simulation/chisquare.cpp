#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float o[100],e,x2[100],sum=0.0,tab_value;
	int i,N,n;
	printf("Enter the total numbers of observation and number of classes :\n");
	scanf("%d%d",&N,&n);
	e=(float)N/n;
	printf("Enter the observed frequencies:\n");
     for(i=0;i<n;i++){
	 
	scanf("%f",&o[i]);
	x2[i]=pow((o[i]-e),2)/e;}
	printf("\n Oi \t Ei\t(Oi-Ei)\t(Oi-Ei)^2/Ei");
	for(i=0;i<n;i++)
{
		printf("\n%.2f\t%.2f\t%.2f\t %.2f",o[i],e,(o[i]-e),x2[i]);
	sum =sum+x2[i];
	}
	printf("\nThe total value of calculated chi-square is %.2f",sum);
	printf("\nEnter the tabulated value of chi-square:\n");
	scanf("%f",&tab_value);
	if(sum<tab_value)
	
		printf("\nConclusion:The given data is uniformly distributed");
	
	else
		printf("\nConclusion:The given data is not uniformly distributed");
		
	
	
}
