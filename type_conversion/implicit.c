#include <stdio.h>

int main() {
    int n1 = 5;
    float n2 = 4.5;

    // Implicit type conversion from int to float
    float result = n1 + n2;

    printf("%.2f\n", result);
    return 0;
}