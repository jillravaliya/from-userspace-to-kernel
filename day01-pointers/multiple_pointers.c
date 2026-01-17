#include <stdio.h>

int main () {

	int x = 10;
        int y = 20;
        int z = 30;

	int *ptr_x;
        int *ptr_y;
        int *ptr_z;

        ptr_x = &x;
        ptr_y = &y;
        ptr_z = &z;


	printf("=== ORIGINAL VALUES ===\n");
	printf("x = %d, y = %d, z = %d\n\n", x, y, z);

        printf("=== VALUES THOUGHT POINTERS ===\n");
	printf("ptr_x = %d\n", *ptr_x);
        printf("ptr_y = %d\n", *ptr_y);
        printf("ptr_z = %d\n\n", *ptr_z);

        printf("=== CHANGING THOUGHT POINTERS ===\n");

	*ptr_x = 100;
        *ptr_y = 200;
        *ptr_z = 300;

        printf("=== AFTER CHANGING THOUGHT POINTERS ===\n");
        printf("x = %d, y = %d, z = %d\n\n", x, y, z);

        printf("=== ADRESSES (PROOF THEY'RE CONNECTED ===\n");
	printf("Address of x : %p, ptr_x stores : %p\n", &x, ptr_x);
        printf("Address of y : %p, ptr_x stores : %p\n", &y, ptr_y);
        printf("Address of z : %p, ptr_x stores : %p\n", &z, ptr_z);

	return 0;
}
