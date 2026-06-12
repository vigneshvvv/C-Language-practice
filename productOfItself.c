#include<stdio.h>
#include<stdlib.h>


int* productExceptSelf(int arr[], int n){
    int *result = malloc(n * sizeof(int));

    for(int i = 0; i <n; i++){
        int product = 1;

        for(int j = 0; j <n; j++){
            if(i != j){
                product *= arr[j];
            }
        }
        result[i] = product;
    }
    return result;
}


void main(){

    // int arr[] = {1,2,3,4};
    int arr[] = {-1,1,0,-3,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int *output = productExceptSelf(arr, n);
    for(int i = 0; i <n; i++){
        printf("%d\n", output[i]);
    }
    free(output);

}