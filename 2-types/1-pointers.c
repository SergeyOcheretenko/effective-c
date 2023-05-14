#include <stdio.h>

void swap(int *pa, int *pb) {
    int swapper = *pa;
    *pa = *pb;
    *pb = swapper;
    return;
}

int main(void) {
    int a = 21;
    int b = 17;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
