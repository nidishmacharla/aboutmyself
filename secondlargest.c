/*to find second largest number*/
#include<stdio.h>
int main()
{
	int data,lar=0,seclar,a;
	printf("enter the data:");
	scanf("%d",&data);
	while(data>0)
	{
		a=data%10;
		if(a>lar)
		{
		seclar=lar;
		lar=a;
	    }
	    else if(a>seclar)
	    {
	    seclar=a;
	    }
		data=data/10;
	}printf("second largest=%d",seclar);
}
