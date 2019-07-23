#include<stdio.h>
struct fraction
{
    int nume;
    int deno;
};
void getinput(struct fraction *x)
{   
    printf("Enter the numerator:\n");
    scanf("%d"&x->nume);
    printf("Enter the denominator:\n");
    scanf("%d",&x->deno);
    return;
}
struct fraction compute(struct fraction a,struct fraction b)
{   
    struct fraction c;
    c.nume=(a.nume*b.deno)+(b.nume*a.deno);
    c.deno=a.deno*b.deno;
    return c;
}
struct fraction common(struct fraction c)
{
    int m,n,gcd=0;
    m=c.nume;
    n=c.deno;
    while(m!=n)
    {
        if(m>n)
            m-=n;
        else
            n-=m;
    }
    gcd=m;
    c.nume=c.nume/gcd;
    c.deno=c.deno/gcd;
    return c;
}
int main()
{
    struct fraction a,b,c;
    a=getinput();
    b=getinput();
    c=compute(a,b);
    c=common(c);
    printf("The sum of fractions is %d/%d\n",c.nume,c.deno);
    return 0;
}
  
