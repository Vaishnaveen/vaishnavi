#include<stdio.h>
int inputn(int n)
{
    scanf("%d",&n);
    return n;
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
    n=inputn(n)
    for(int i=0;i<n;i++)
    {   
        scanf("%d",&a[]);
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
    int s=0,n,i;
    printf("read n:\n");
    inputn(&n);
    int a[n];
    inputnumbers(n,a);//a[n] gives the nth element of the array not n elements ,thus we use a[0]or simply a not even &a since it is same as a.//
    compute(&s,a);// when the program expects an integer but in function call the given value is that of a pointer there is an error of making a pointer from integer without a cast//
    output(s);
}
