#include "Header.h"

int Menu()
{
	char ch;
	char lvl;
	int exit = 0;
	int complexity = 8;
	do
	{
		system("cls");
		printf("1. Начать играть\n2. Правила игры\n3. Настройка сложности\n4. Список победителей\n");
		printf("Выберите пункт: ");
		scanf("%c", &ch);
		system("cls");
		getchar();

		switch (ch)
		{
		case '1':
			exit = 1;
			break;
		case '2':
			printf("Игрок и робот по очереди ставят на свободные клетки поля 3:3 знаки (один всегда крестики, другой всегда нолики). \
Первый, выстроивший в ряд 3 своих фигуры по вертикали, горизонтали или большой диагонали, выигрывает. \
Если игрок и робот заполнили все 9 ячеек и оказалось, что ни в одной вертикали, горизонтали или большой диагонали нет трёх одинаковых \
знаков, партия считается закончившейся в ничью. Первый ход делает тот, кто ставит крестики.\n");
			getchar();
			break;
		case '3':
			printf("Выберите сложность:\n1. Легкая\n2. Нормальная\n3. Высокая\n");
			printf("Пункт: ");
			scanf("%c", &lvl);
			getchar();
			switch (lvl)
			{
			case '1':
				printf("Вы выбрали сложность 'Легкая'");
				complexity = 4;
				scanf("%*[^\n]");
				getchar();
				break;
			case '2':
				printf("Вы выбрали сложность 'Нормальная'");
				complexity = 8;
				scanf("%*[^\n]");
				getchar();
				break;
			case '3':
				printf("Вы выбрали сложность 'Высокая'");
				complexity = 13;
				scanf("%*[^\n]");
				getchar();
				break;
			default:
				printf("Такого пункта нет!");
				scanf("%*[^\n]");
				getchar();
				break;
			}
			break;
		case '4':
			ListName();
			getchar();
			break;
		default:
			break;
		}
	} while (exit == 0);

	return complexity;
}