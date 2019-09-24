#include<stdio.h>
void sum(int x, int s)
{
	s+=x;
	if (x!=0)
	sum(x-1, s);
	else if(x==0)
	printf("%d\n", s);
}
int main()
{
	int n;
	printf("Sum of numbers upto: ");
	scanf("%d", &n);
	sum(n, 0);
	return 0;
}
