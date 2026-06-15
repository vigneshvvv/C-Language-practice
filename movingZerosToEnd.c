#include<stdio.h>

void moveZero(int nums[], int n){
    int left = 0;

    for(int right = 0; right <n; right++){
        if(nums[right] !=0){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
        }
    }
}

void moveZerosEnd(int arr[], int n){
    int startPointer = 0;
    int rightPointer = 1;

    if(n==1){
        return;
    }

    while(rightPointer < n){
        if(arr[startPointer] == 0 && arr[rightPointer] == 0){
            rightPointer++;
        }
        else if(arr[startPointer] == 0 && arr[rightPointer] != 0){
            int temp = arr[startPointer];
            arr[startPointer] = arr[rightPointer];
            arr[rightPointer] = temp;
        } else {
            startPointer++;
            rightPointer++;
        }
    }
}


void main(){

    int nums[] = {0,1,0,3,12};
    int n = sizeof(nums) / sizeof(nums[0]);
    moveZerosEnd(nums, n);

    for(int i =0; i <n ; i++){
        printf("%d\n", nums[i]);
    }   

}
