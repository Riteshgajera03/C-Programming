#include<stdio.h>
#include<conio.h>
#define PI 3.14

main()
{
	int r;

	clrscr();

	printf("Enter The r Of Circle =");
	scanf("%d",&r);
	printf("%f \n",PI);
	printf("The area of circle is %f \n", PI*r*r);

	getch();
}