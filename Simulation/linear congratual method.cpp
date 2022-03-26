#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float x[50],r[50],m,a,c=0;
	int i=1,j;
	r[0]=x[0]/m;
	printf("enter the value of m,a and x0");
	scanf("%f%f%f",&m,&a,&x[0]);
		while(true)
	{
		
		x[i]=fmod(a*x[i-1]+c,m);
		r[i]=x[i]/m;
			for(j=0;j<i;j++){
			
		if(r[j]==r[i])
		{
			goto final;
			
		}

	}
	i++;	
	}
	final:
		printf("\nthe sequence of Xi and the subsequent random numbers Ri are:");
	for(j=1;j<i;j++)
	{


				printf("\nX[%d]:%.4f\t\tR[%d]:%.4f",j,x[j],j,r[j]);
					}
}
