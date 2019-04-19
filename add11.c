#include<stdio.h>
void input()
{
printf("Enter a number\n");
int n;
scanf("%d",&n);
}
void compute(int*n)
{
*n=n++;
}
void output(int n)
{
printf("the result is:%d\n",n);
}
int main()
{
int n;
input();
compute(&n);
output(&n);
return 0;
  
}
