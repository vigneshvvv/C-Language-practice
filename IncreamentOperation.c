#include<stdio.h>

void main(){
    int x = 10;
    int y = x++;

    printf("x is %d\n", x);
    printf("y is %d\n", y);

    int a = 10;
    int b = ++a;

    printf("a is %d\n", a);
    printf("b is %d\n", b);

    int c = 10;
    int d = c--;

     printf("c is %d\n", c);
    printf("d is %d\n", d);

    int e = 10;
    int f = --e;

    printf("e is %d\n", e);
    printf("f is %d\n", f);



}