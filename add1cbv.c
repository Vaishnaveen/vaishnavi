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
  n=n+1;
  return n;
}
int output(int n)
{
printf("the result is:%d\n",n);
}
int main()
{
int n;
n=getinput();
n=compute(n);
n=output(n);
}

