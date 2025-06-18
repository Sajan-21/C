#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n,i,product;
    printf("enter a number \n");
    scanf("%d",&n);

    for(i = 1; i <= 10; i++) {
        product = i*n;
        printf("%d * %d = %d \n",i,n,product);
    }

}