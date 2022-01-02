/* to print factorial number*/
#include<stdio.h>
int main()
{
	int n,num,f=1;
	printf("enter the number:");
	scanf("%d",&num);
	for(n=1;n<=num;n++)
	{
		f=f*n;
	}printf("%d",f);
	
}
