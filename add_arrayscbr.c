#include<stdio.h>
void inputn(int *n)
{
    scanf("%d",n);
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
void compute(int a[], int s)
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
    int s,n;
    printf("read n:\n",n);
    input(&n);
    int a[n];
    compute(s,a[n]);
    output(s);
}
