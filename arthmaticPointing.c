#include<stdio.h>

void main(){
    int arr[] = {10,20,30,40};

    int *p = arr;
    //  int *p = arr[0];
    printf("%d\n", *p);

    p++;

    printf("%d\n", *p);
    printf("%p\n", arr);

    printf("%d\n", arr[2]);
    printf("%d\n", *(arr +2));

    for(int i=0;  i<4; i++){
        printf("%d", arr[i]);
    }

    int *c = arr;
    for(int i = 0; i <4; i++){
        printf("%d\n", *c);
        c++;
    }

    int arrN[] = {1,2,3};
    int *d = arrN;

    // *d -> d++
    printf("%d\n", *d++);

    //d++ -> *d
    printf("%d\n", *++d);

    char arrC[] = {'A', 'B', 'C'};
    char *f = arrC;
    printf("%c\n", *f+1);

    printf("%lu\n", sizeof(arr));
    printf("%lu\n", sizeof(p));


}