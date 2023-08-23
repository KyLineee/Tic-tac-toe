#include "Header.h"

void Player(char Glavn[][3], char h)
{
	int a = 5;
	int b = 5;
	int tru = 0;
	while (tru == 0)
	{
		while (((a < 0 || a > 2) || (b < 0 || b > 2)) || (tru == 0))
		{
			tru = 1;
			printf("¬ведите координаты: ");
			scanf("%d %d", &a, &b);
			a--;
			b--;
			scanf("%*[^\n]");
		}

		/*tru = 0;
		if (Glavn[a][b] == '.')
		{
			tru = 1;
		}*/

		_asm
		{
			mov tru,0
			mov eax, Glavn
			mov edx,a
			imul edx,3
			add edx,b
			movzx ebx, [eax+edx]
			cmp ebx,' '
			jne Not_Equal_Dot
			mov tru,1
			Not_Equal_Dot:
		}
	}
	Glavn[a][b] = h;
}