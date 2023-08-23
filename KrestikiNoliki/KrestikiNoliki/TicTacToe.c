#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	char Glavn[3][3];
	char xod=' ';
	int complexity = 8;
	memset(Glavn, ' ', sizeof(Glavn));

	Screensaver();
	Loading();
	complexity = Menu();

	while (xod != 'X' && xod !='O')
	{
		printf("За 'X' или 'O' будете ходить: ");
		scanf("%c", &xod);
		scanf("%*[^\n]");
		getchar();
	}

	system("cls");

	if (xod == 'X')
	{
		for (int t = 0;t<6; t++)
		{
			Print(Glavn);
			Player(Glavn, 'X');

			if (WinCheck(Glavn, 'X') == 0)
			{
				Win(Glavn);
				break;
			}

			if (t != 4)	
			{
				Robot(Glavn, 'O', 'X', t, complexity);
			}

			if (WinCheck(Glavn, 'O') == 0)
			{
				system("cls");
				Print(Glavn);
				printf("К сожелению, Вы проиграли!\n");
				break;
			}

			if (t == 4)
			{
				system("cls");
				Print(Glavn);
				printf("Ничья!\n");
				break;
			}

			system("cls");
		}
	}
	else
	{
		for (int t = 0; t<6; t++)
		{
			Robot(Glavn, 'X', 'O', t, complexity);
			Print(Glavn);

			if (WinCheck(Glavn, 'X') == 0)
			{
				printf("К сожелению, Вы проиграли!\n");
				break;
			}

			if (t != 4)
			{
				Player(Glavn, 'O');
			}
	
			if (WinCheck(Glavn, 'O') == 0)
			{
				Win(Glavn);
				break;
			}

			if (t == 4)
			{
				printf("Ничья!\n");
				break;
			}
	
			system("cls");
		}
	}
	system("pause");
	return 0;
}