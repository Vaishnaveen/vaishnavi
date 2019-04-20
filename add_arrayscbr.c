#include<stdio.h>
void inputn(int *x)
{
    scanf("%d",x);
    return;
}
void inputnumbers(int n, int a[])
{   
    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    return;
}
void compute(int a[n], int s)
{
    
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return;
}
void output(int s)
{
    for(int i=0;i<n;i++)
    {
        printf("tne sum of n nos is:%d\n",s);
    }
}
 int main()
{
    int x,s,n;
    printf("read n:\n",x);
    input(&n);
    int a[n];
    inputnumbers(n,&a[]);
    compute(&s,&a[n]);
    output(s);
}
