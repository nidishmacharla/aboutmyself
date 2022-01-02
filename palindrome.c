/* to print palindrome in a range*/
#include<stdio.h>
int main()
{
	int temp,min,max,r,sum=0,num;
	printf("enter the max and min ranges:");
	scanf("%d%d",&min,&max);
	for(num=min;num<=max;num++)
	{
		temp=num;
		sum=0;
		while(temp)
		{
		r=temp%10;
		sum=sum*10+r;
		temp=temp/10;
	    }
	if(num==sum)
	printf("%d\n",num);
    }
}
