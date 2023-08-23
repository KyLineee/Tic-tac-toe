#include "Header.h"

void Win(char Glavn[][3])
{
	FILE* file;
	char name[40];

	system("cls");
	Print(Glavn);
	printf("Поздравляю! Вы выйграли!\n");
	if ((file = fopen("Spisok", "a+")) == NULL)
	{
		printf("Не удалось открыть файл");

	}
	else
	{
		printf("Введите ваше имя, для внесения его в список победителей: ");
		getchar();
		fgets(name, 40, stdin);
		fprintf(file, "%s", name);
		fclose(file);
	}
	ListName();
}