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
void compute(struct fraction a,struct fraction b, struct fraction *c)
{
    fraction f1={.nume,b.deno};
    fraction f2={b.nume,b.deno};
    sum=={f1
int main()
{
    struct fraction a,b,c;
    printf("Enter the fraction1 in X/Y form:\n");
    getinput(&x);
    printf("Enter the fraction2 in X/Y form:\n");
    getinput(&x);
    compute(&a,&b,c);
    output(&c);
    return 0;
}
  
