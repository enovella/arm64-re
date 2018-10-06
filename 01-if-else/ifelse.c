#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


	srand(time(NULL));
	int r = rand() % 100;

	if (r < 50) {
		printf("%d < 50",r);
	} else {
		printf("%d > 50",r);
	}

	return 0;
}

