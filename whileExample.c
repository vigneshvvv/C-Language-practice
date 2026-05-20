#include <stdio.h>

void main(){

    // int timer = 10;

    // while (timer > 0)
    // {
    //   printf("T-minus %d seconds... \n", timer);
    //   timer--;
    // }
    // printf("Timer ended");

    // int i = 1;

    // while(i <= 10){
    //     if(i == 5){
    //         printf("Found number 5! Breaking out. if the loop");
    //         break;
    //     }
    //     printf("Checking the number %d\n", i);
    //     i++;
    // }
    // printf("Loop Ended");

    int i = 0;

    while(i <= 10){
        i++;
        if(i == 5){
            printf("skipping the number 5...\n");
            continue;
        }
        printf("Number: %d\n", i);
    }


}