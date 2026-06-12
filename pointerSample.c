#include<stdio.h>

//non -pointer way

// int update(int x){
//     x = 100;
//     return x;
// }

void update(int *x){
    printf("%d\n", *x);
    *x= 100;
} 


void main(){

    int a = 10;

    // non pointer way

    // int n = update(a);
    // a = n;
    // printf("%d\n", a);

    update(&a);
    printf("%d\n", a);

}