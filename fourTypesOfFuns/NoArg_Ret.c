#include <stdio.h>
#include <stdlib.h>

int getAndDisplaySum();

int main () {

    int result;

    result = getAndDisplaySum();
    printf("%d",result);

    return EXIT_SUCCESS;
}

int getAndDisplaySum() {
    int a, b, sum;

    printf("enter two numbers to display the sum\n");
    scanf("%d",&a);
    scanf("%d",&b);

    sum = a+b;

    return sum;
}