#include<stdio.h>

void main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
     
    int arr2[5];
    int index = 0;

    for(int i = size-1; i >=0; i--){
        arr2[index] = arr[i];
        index++;
    }

    printf("Reversed array: ");

    for(int i = 0; i <size;i++){
        printf("%d\n", arr2[i]);
    }
    printf("\n");



}