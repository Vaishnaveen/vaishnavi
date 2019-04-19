#include<stdio.h>
void input(int *a)
{
    printf("Enter a number\n");
    scanf("%d",a);
    return *a;
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
    n=input(&a);
    compute(a,&n);
    output(n);
    return 0;
  
}
