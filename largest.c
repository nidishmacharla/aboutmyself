/*to find largets number in a given interger*/
#include<stdio.h>
int main()
{
	int data,a,lar=0;
	printf("enter the data:");
	scanf("%d",&data);
	while(data>0)
	{
		a=data%10;// a gets last value
		if(a>lar)
		{
		lar=a;
	    }
		data=data/10;
	}printf("largest number=%d",lar);
}
