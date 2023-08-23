#include "Header.h"

void Robot(char Glavn[][3], char h, char f, int t, int complexity)
{
	char Copy[3][3];
	int tru = 0;
	int count = 0;
	int a, b;

	while (tru == 0)
	{
		a = rand() % 3;
		b = rand() % 3;
		if (Glavn[a][b] == ' ')
		{
			if (count == complexity || t < 1)
			{
				break;
			}
			count++;
			memcpy(Copy, Glavn, sizeof(Glavn));
			Copy[a][b] = h;
			if (WinCheck(Copy, h) == 0)
			{
				tru = 1;
			}
			Copy[a][b] = f;
			if (WinCheck(Copy, f) == 0)
			{
				tru = 1;
			}
		}
	}
	Glavn[a][b] = h;
}