#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1,n2,n3,avg;
    printf("enter 3 numbers \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    avg = (n1+n2+n3)/3;
    printf("average of the three numbers are : %d",avg);
}