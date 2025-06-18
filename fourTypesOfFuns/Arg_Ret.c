#include <stdio.h>
#include <stdlib.h>

int sum(int num1, int num2);

int main () {

    int a, b, result;

    printf("enter two numbers to display the sum\n");
    scanf("%d",&a);
    scanf("%d",&b);

    result = sum(a, b);
    printf("%d",result);

    return EXIT_SUCCESS;
}

int sum(int num1, int num2) {
    return num1+num2;
}