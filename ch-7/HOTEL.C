#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	char b;
	char c;
	clrscr();


		printf("\033[1;33m"); //color
		printf("\n\nWelcome To TAJ SKYLILNE\n\n");
		printf("\033[0m"); //color reset
		printf("press 1 for Single Bed Room\n");
		printf("press 2 for Double Bed Room\n");
		printf("press 3 for Triple Bed Room\n");
		printf("press 4 for Quad Bed Room\n");

		scanf("%d",&a);

		switch(a)
		{
			case 1:
				clrscr();
				printf("\033[1;33m"); //color
				printf("\n\nContinue to Single Bed Room...\n\n");
				printf("\033[0m"); //color reset

				printf("press A for Non-Ac Room\n");
				printf("press B for Ac Room\n");
				printf("press C for Deluxe Room\n");
				printf("press D for Luxury Room\n");

				fflush(stdin);
				scanf("%c",&b);

				switch(b)
				{
					case 'A':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Non-Ac Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;


							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;


							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;


					case 'B':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Ac Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;


							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;


							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default :
								 clrscr();
								 printf("Invaild Choise...");
								 break;
						}
						break;


					case 'C':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Deluxe Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;


							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;


							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default :
								 clrscr();
								 printf("Invaild Choise...");
								 break;
						}
						break;
					case 'D':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Luxury Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;


							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;


							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default :
								 clrscr();
								 printf("Invaild Choise...");
								 break;

						}
						break;

					default:
						clrscr();
						printf("Invaild Choise..");
						break;

				}
				break;

			case 2:
				clrscr();
				printf("\033[1;33m"); //color
				printf("\n\nContinue to Double Bed Room...\n\n");
				printf("\033[0m"); //color reset

				printf("press A for Non-Ac Room\n");
				printf("press B for Ac Room\n");
				printf("press C for Deluxe Room\n");
				printf("press D for Luxury Room\n");


				fflush(stdin);
				scanf("%c",&b);

				switch(b)
				{
					case 'A':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Non-Ac Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;

							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;

							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}

					case 'B':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Ac Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;


							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;


							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;


					case 'C':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Deluxe Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;


							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;


							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;

					case 'D':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Luxury Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;


							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;


							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;

					default:
						clrscr();
						printf("Invaild Choise..");
						break;

				}
				break;

			case 3:
				clrscr();
				printf("\033[1;33m"); //color
				printf("\n\nContinue to Triple Bed Room...\n\n");
				printf("\033[0m"); //color reset

				printf("press A for Non-Ac Room\n");
				printf("press B for Ac Room\n");
				printf("press C for Deluxe Room\n");
				printf("press D for Luxury Room\n");


				fflush(stdin);
				scanf("%c",&b);

				switch(b)
				{
					case 'A':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Non-Ac Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;


							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;


							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;


					case 'B':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Ac Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;


							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;


							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;


					case 'C':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Deluxe Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;


							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;


							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;
							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;
							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;
					case 'D':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Luxury Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;
								 
							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;

							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;

							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;

							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;

					default:
						clrscr();
						printf("Invaild Choise..");
						break;

				}
				break;

			case 4:
				clrscr();
				printf("\033[1;33m"); //color
				printf("\n\nContinue to Quid Bed Room...\n\n");
				printf("\033[0m"); //color reset

				printf("press A for Non-Ac Room\n");
				printf("press B for Ac Room\n");
				printf("press C for Deluxe Room\n");
				printf("press D for Luxury Room\n");


				fflush(stdin);
				scanf("%c",&b);

				switch(b)
				{
					case 'A':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Non-Ac Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;

							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;

							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;

							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;

							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;

					case 'B':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Ac Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;

							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;

							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;

							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;

							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;

					case 'C':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Deluxe Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;

							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;

							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;

							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;

							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;
					case 'D':
						clrscr();
						printf("\033[1;33m"); //color
						printf("\n\nContinue to Luxury Room..\n\n");
						printf("\033[0m"); //color reset

						printf("press A for 2 Hour\n");
						printf("press B for 4 Hour\n");
						printf("press C for 8 Hour\n");
						printf("press D for 12 Hour\n");
						printf("press E for 24 Hour\n");


						fflush(stdin);
						scanf("%c",&c);

						switch(c)
						{
							case 'A':
								 clrscr();
								 printf("Continue to 2 Hour Booking..");
								 break;

							case 'B':
								 clrscr();
								 printf("Continue to 4 Hour Booking..");
								 break;

							case 'C':
								 clrscr();
								 printf("Continue to 8 Hour Booking..");
								 break;

							case 'D':
								 clrscr();
								 printf("Continue to 12 Hour Booking..");
								 break;

							case 'E':
								 clrscr();
								 printf("Continue to 24 Hour Booking..");
								 break;

							default:
								clrscr();
								printf("Invaild Choise...");
								break;
						}
						break;

					default:
						clrscr();
						printf("Invaild Choise..");
						break;

				}

				break;

			default:
				clrscr();
				printf("Invild Room Choise..!!");
				break;
		}

	getch();
}