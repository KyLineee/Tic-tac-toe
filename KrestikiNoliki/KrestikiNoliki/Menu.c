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
		printf("1. ������ ������\n2. ������� ����\n3. ��������� ���������\n4. ������ �����������\n");
		printf("�������� �����: ");
		scanf("%c", &ch);
		system("cls");
		getchar();

		switch (ch)
		{
		case '1':
			exit = 1;
			break;
		case '2':
			printf("����� � ����� �� ������� ������ �� ��������� ������ ���� 3:3 ����� (���� ������ ��������, ������ ������ ������). \
������, ����������� � ��� 3 ����� ������ �� ���������, ����������� ��� ������� ���������, ����������. \
���� ����� � ����� ��������� ��� 9 ����� � ���������, ��� �� � ����� ���������, ����������� ��� ������� ��������� ��� ��� ���������� \
������, ������ ��������� ������������� � �����. ������ ��� ������ ���, ��� ������ ��������.\n");
			getchar();
			break;
		case '3':
			printf("�������� ���������:\n1. ������\n2. ����������\n3. �������\n");
			printf("�����: ");
			scanf("%c", &lvl);
			getchar();
			switch (lvl)
			{
			case '1':
				printf("�� ������� ��������� '������'");
				complexity = 4;
				scanf("%*[^\n]");
				getchar();
				break;
			case '2':
				printf("�� ������� ��������� '����������'");
				complexity = 8;
				scanf("%*[^\n]");
				getchar();
				break;
			case '3':
				printf("�� ������� ��������� '�������'");
				complexity = 13;
				scanf("%*[^\n]");
				getchar();
				break;
			default:
				printf("������ ������ ���!");
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