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
  
