#include <stdio.h>
#include <stdlib.h>

#define MESSAGE "Introductional program"

int main(void) {
    if (printf("%s\n", MESSAGE) < 0) {
        fprintf(stderr, "Error: \"printf\" call failed\n");
	return EXIT_FAILURE;
    }
    return EXIT_SUCCESS; 
}
