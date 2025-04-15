#include<stdio.h>
#include<conio.h>

main()
{       int first, second, third;
	clrscr();

		printf("enter value of first : ");
		scanf("%d",&first);

		printf("enter value of second : ");
		scanf("%d",&second);

		third = 180 - (first + second);
		printf("the ans is : %d\n", third);

	getch();
}
