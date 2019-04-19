#include<stdio.h>
int getinput()
{
int n;
printf("enter a number\n");
scanf("%d",&n);
return n;
}
int compute(int n)
{
return n++;
}
int output(int r)
{
printf("the result is:%d\n",r);
}
int main()
{
n=input;
r=compute;
output=r;
return;
}

