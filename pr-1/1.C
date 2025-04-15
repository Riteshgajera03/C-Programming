#include<stdio.h>
#include<conio.h>

main()
{
	int celsius;
	float fahrenheit;
	clrscr();

		printf("enter temperature in celsius : ");
		scanf("%d", &celsius);

	//convert to fahrenheit
		fahrenheit = (9/5*celsius) + 32;


	//result
		printf("fahrenheit is : %f",fahrenheit);


	getch();
}