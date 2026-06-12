#include<stdio.h>

void main(){
    int *a;

    int d = 5;
    a = &d;

    printf("%d\n", a);
    printf("%d\n", *a);

}