#include<stdio.h>
struct fraction
{
	int nume;
	int deno;
};
void getinput(int *x)
{
	scanf("%d",x);
	return;
}
int main()
{
	struct fraction x;
	printf("Enter numerator:\n");
	getinput(&x.nume);
	printf("Enter denominator:\n");
	getinput(&x.deno);
	printf("The fraction is %d/%d ",x.nume,x.deno);
	return 0;
}
	
