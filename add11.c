#include<stdio.h>
void input()
{
printf("Enter a number\n");
int n;
scanf("%d",&n);
}
void compute(int*n)
{
int a;
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
input(&n);
compute(&n,*n);
output(&a);
return 0;
  
}
