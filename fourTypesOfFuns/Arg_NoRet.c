#include <stdio.h>
#include <stdlib.h>

void sum(int x, int y);
int main () {
    int a,b;

    printf("enter two numbers to display the sum\n");
    scanf("%d",&a);
    scanf("%d",&b);

    sum(a, b);

    return EXIT_SUCCESS;
}

void sum(int x, int y) {
    int result;

    result = x+y;
    printf("%d",result);
}