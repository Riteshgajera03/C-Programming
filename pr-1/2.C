#include<stdio.h>
#include<conio.h>

main()
{
	int bs, hra, da, ta, gs;
	clrscr();

		printf("enter a base salary :");
		scanf("%d", &bs);

		hra = bs*0.15;
		da = bs*0.20;
		ta = bs*0.10;

		gs = bs+hra+da+ta;

		printf("bs :&d\n",bs);
		printf("hra :&d\n",hra);
		printf("da :&d\n",da);
		printf("ta :&d\n",ta);
		printf("gross salary is %d\n",gs);


	getch();
}