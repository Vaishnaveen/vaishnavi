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
        scanf("%d",&a[i]);
    }
    return;
}
void compute(int a[], int s)
{
    int n;
    for(int i=0;i<n;i++)
    {
        s=s+a[n];
    }
    return;
}
void output(int s)
{
    int n;
    for(int i=0;i<n;i++)
    {
        printf("tne sum of n nos is:%d\n",s);
    }
}
 int main()
{
    int s,n;
    printf("read n:\n",n);
    inputn(&n);
    int a[n];
    inputnumbers(n,&a[n]);
    compute(&s,a[n]);// when the program expects an integer but in function call the given value is that of a pointer there is an error of making a pointer from integer without a cast//
    output(s);
}
