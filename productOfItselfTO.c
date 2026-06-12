#include<stdio.h>
#include<stdlib.h>


int* productOfSelfResult(int arr[], int n){
    int *result = malloc(n*sizeof(int));
    result[0] = 1;

    for(int i = 1; i <n ; i++){
        result[i] = result[i-1] * arr[i-1];
    }

    int rightProduct = 1;
    for(int i = n-1; i>= 0; i--){
        result[i] *= rightProduct;
        rightProduct *= arr[i];
    }

    return result;
}

void main(){

    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
}
