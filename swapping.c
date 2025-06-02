#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int a,b,temp;

    printf("enter 2 numbers for 'a' and 'b'");
    scanf("%d%d",&a,&b);
    
    temp = a;
    a = b;
    b = temp;

    printf("a : %d and b : %d",a,b);
}