#include "Header.h"

void ListName()
{
	FILE* file;
	char name[40];

	if ((file = fopen("Spisok", "r")) == NULL)
	{
		printf("�� ������� ������� ����");

	}
	else
	{
		printf("������ ���� �����������:\n");
		while (fgets(name, 40, file))
		{
			printf("%s", name);
		}
		fclose(file);
	}
}