#include<stdio.h>
struct fraction
{
	int nume;
	int deno;
};
void getinput(struct fraction *x)
{      
	scanf("%d/%d",&x->nume,&y->deno);
	return;
}
int main()
{
	struct fraction x,y;
	printf("Read the fraction in X/Y:\n");
	getinput(&x.nume,&y.deno);
	printf("The fraction is %d/%d ",x.nume,y.deno);
	return 0;
}
	
//the input must be in a fractional form since we are already using composite structure//
