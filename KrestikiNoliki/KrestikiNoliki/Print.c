#include "Header.h"

void Print(char Glavn[][3])
{
	printf(" %c | %c | %c \n", Glavn[0][0], Glavn[0][1], Glavn[0][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", Glavn[1][0], Glavn[1][1], Glavn[1][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", Glavn[2][0], Glavn[2][1], Glavn[2][2]);
}