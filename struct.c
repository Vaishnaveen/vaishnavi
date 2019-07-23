#include<stdio.h>
struct fraction
{
	int nume;
	int deno;
};
int main()
{
	struct fraction x;
	printf("Read the fraction in X/Y:\n");
	scanf("%d/%d",&x.nume,&x.deno);
	printf("The fraction is %d/%d ",x.nume,x.deno);
	return 0;
}
	
//the input must be in a fractional form since we are already using composite structure//
