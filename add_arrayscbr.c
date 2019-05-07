#include<stdio.h>
void inputn(int *n)
{
    scanf("%d",n);
    return;
}
void inputnumbers(int n, int a[n])
{   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    return;
}
void compute(int n,int a[n], int *sum)
{   int s=0;
    for(int i=0;i<n;i++)
    {   
        s+=a[n];
    }
    *sum=s;
    return;
}
void output(int n,int s)
{
        printf("tne sum of n nos is:%d\n",s);
}
 int main()
{
    int n,sum;
    printf("read n:\n");
    inputn(&n);
    int a[n];
    inputnumbers(n,a);//a[n] gives the nth element of the array not n elements ,thus we use a[0]or simply a not even &a since it is same as a.//
    compute(n,a,&sum);// when the program expects an integer but in function call the given value is that of a pointer there is an error of making a pointer from integer without a cast//
    output(n,sum);
    return 0;
 }
