#include "Header.h"

void Time(float seconds) {
	clock_t start_time = clock();
	while (clock() < start_time + seconds * CLOCKS_PER_SEC);
}