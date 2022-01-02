/*sum of the digits*/
#include<stdio.h>
int main()
{
	int num,a,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
		
		a=num%10;
		sum=sum+a;
		num=num/10;
	}printf("%d",sum);
}
