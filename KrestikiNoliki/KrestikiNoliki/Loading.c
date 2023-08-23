#include "Header.h"

void Loading()
{
	int progress = 100;
	float seconds = 0.02;

	printf("\n\n\n\n\n\n\nЗагрузка: ");
	for (int i = 0; i < progress; i++) {
		printf("*");
		Time(seconds);
	}
	printf("\n");
}