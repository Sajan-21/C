#include <stdio.h>

int main() {
    float f1 = 5.5;
  	int a;
  
    // Automatic type conversion from float to int
    a = f1;

    // Manual type conversion from int to float
    float f2 = (float)a;

    printf("a: %d\n", a);
  	printf("f1: %f\n", f1);
  	printf("f2: %f", f2);
    return 0;
}