#include <stdio.h>

void main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = size -1;

    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    printf("Reverse array");
    for(int i = 0; i <size;i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
    


}