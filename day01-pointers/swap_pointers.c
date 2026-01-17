#include <stdio.h>

void swap(int *a, int *b);

int main () {

	int x = 50;
	int y = 100;

	printf("=== BEFORE SWAP ===\n");
	printf("x = %d\n", x);
	printf("y = %d\n\n", y);

	swap(&x, &y);

        printf("=== AFTER SWAP ===\n");
        printf("x = %d\n", x);
        printf("y = %d\n\n", y);

	return 0;
}

void swap(int *a, int *b) {

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


