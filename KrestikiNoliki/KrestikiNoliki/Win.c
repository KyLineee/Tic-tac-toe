#include "Header.h"

void Win(char Glavn[][3])
{
	FILE* file;
	char name[40];

	system("cls");
	Print(Glavn);
	printf("����������! �� ��������!\n");
	if ((file = fopen("Spisok", "a+")) == NULL)
	{
		printf("�� ������� ������� ����");

	}
	else
	{
		printf("������� ���� ���, ��� �������� ��� � ������ �����������: ");
		getchar();
		fgets(name, 40, stdin);
		fprintf(file, "%s", name);
		fclose(file);
	}
	ListName();
}