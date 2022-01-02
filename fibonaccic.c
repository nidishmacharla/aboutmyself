/*to print fibonaccic series */
#include<stdio.h>
int main()
{
	int a=0,b=1,i,num,sum;
	printf("enter the number:");
	scanf("%d",&num);
	printf("%d%d",a,b);
	for(i=2;i<num;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%d",sum);
   }
}
