#include "Header.h"

int WinCheck(char Glavn[][3], char h)
{
	if (((Glavn[0][0] == h && Glavn[0][1] == h && Glavn[0][2] == h) || (Glavn[1][0] == h && Glavn[1][1] == h && Glavn[1][2] == h) || (Glavn[2][0] == h && Glavn[2][1] == h && Glavn[2][2] == h)) ||
		((Glavn[0][0] == h && Glavn[1][0] == h && Glavn[2][0] == h) || (Glavn[0][1] == h && Glavn[1][1] == h && Glavn[2][1] == h) || (Glavn[0][2] == h && Glavn[1][2] == h && Glavn[2][2] == h)) ||
		((Glavn[0][0] == h && Glavn[1][1] == h && Glavn[2][2] == h) || (Glavn[2][0] == h && Glavn[1][1] == h && Glavn[0][2] == h)))
	{
		return 0;
	}

	return 1;
}