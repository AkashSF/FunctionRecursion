#include<stdio.h>
#include<string.h>
void rev(int i, char b[])
{
	printf("%c", b[i]);
	i--;
	if(i!=-1)
	rev(i, b);
}
int main()
{
	char a[10];
	printf("Enter a string: ");
	gets(a);
	int x = strlen(a);
	printf("Reverse of the string: ");
	rev(x-1, a);
}
