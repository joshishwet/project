# include <stdio.h>
int main()
{
	int C;
	float Fahrenheit;
	
	printf("enter the temperature in celsius:");
	scanf("%d", &C);
	
	Fahrenheit = (C*9/5)+32;
	 printf("the temperature in Fahrenheit is: %0.1f",Fahrenheit);
}
