#include<stdio.h>
void input()
{
printf("Enter a number\n");
int n;
scanf("%d",&n);
}
void compute(int a,int *n)
{
*n=n++;
*n=a;
}
void output(int a)
{
printf("the result is:%d\n",a);
}
int main()
{
int n,a;
input();
compute(&n);
output(&a);
return 0;
  
}
