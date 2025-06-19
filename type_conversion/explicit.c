#include <stdio.h>

int main() {
    float n1 = 7.9;
    int n2;

    // Explicit type conversion (casting)
	// from float to int
    n2 = (int)n1;

    printf("%d", n2);
    return 0;
}