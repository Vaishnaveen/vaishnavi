#include<stdio.h>
void input(int *n)
{
printf("Enter a number\n");
int n;
scanf("%d",n);
  return;
}
void compute(int a,int *n)
{
*n=a+1;
  return;
}
void output(int a)
{
printf("the result is:%d\n",a);
}
int main()
{
int n,a;
n=input();
n=compute(a,&n);
n=output();
return 0;
  
}
