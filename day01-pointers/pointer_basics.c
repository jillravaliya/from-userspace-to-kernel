#include <stdio.h>

int main() {
    int age = 25;
    int *ptr;

    ptr = &age;

    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);
    printf("Pointer stores: %p\n", ptr);
    printf("Value at pointer: %d\n", *ptr);

    printf("\n--- NOW CHANGING THROUGH POINTER ---\n");
    printf("Before: age = %d\n", age);

    *ptr = 99;

    printf("After *ptr = 99:\n");
    printf("age = %d\n", age);
    printf("*ptr = %d\n", *ptr);

    return 0;
}
