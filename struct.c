#include<stdio.h>
struct fraction
{
	int nume;
	int deno;
};
void getinput(int *x)
{
	scanf("%d/%d",x);
	return;
}
int main()
{
	struct fraction x;
	printf("Enter the numerator and denominator:\n");
	getinput(&x)
	printf("The fraction is %d/%d ",x.nume,x.deno);
	return 0;
}
	
//the input must be in a fractional form since we are already using composite structure//
