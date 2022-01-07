#include<stdio.h>
int  myatoi(char*);
int main()
{
    char s[10];
    puts("enter the string:");
    gets(s);
    printf("%d",myatoi(s));
}
int myatoi(char*p)
{
    int sum=0,ele;
    for(p;*p;p++)
    {
    ele=*p-48;
    sum=sum*10+ele;
    }
     return sum;
}