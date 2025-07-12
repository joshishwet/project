# include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter the value of angle a:\n");
	printf("enter the value of angle b:\n");
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	c=180-(a + b);
	
	printf("third angle is: %d\n",c);
	
}