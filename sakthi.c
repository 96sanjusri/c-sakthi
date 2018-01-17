#include<stdio.h>
void main()
{
int n;
int count=0;
printf("Enter an integer\n");
scanf("%d",&n);
if(n!=0)
{
n=n%10;
count++;
}
printf("number of digits %d",count);
return0;
}
