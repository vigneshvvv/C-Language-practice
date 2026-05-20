#include<stdio.h>

void main(){
    int correct_id = 1234;
    int correct_pin = 9977;

    int input_id, input_pin;
    int attempts = 3;

    while (attempts > 0){
        printf("\n ---ATM Login(%d attempts left) ---\n", attempts);

        printf("Enter User ID: ");
        scanf("%d", &input_id);

        printf("Enter PIN: ");
        scanf("%d", &input_pin);

        if(input_id == correct_id && input_pin == correct_pin){
            printf("Access Granted! Welcome.\n");
            break;
        } else {
            attempts--;
            if(attempts > 0){
                printf("Invalid ID or PIN. Please try again");
            } else {
                printf("Too many failures. your card has been blocked. \n");
            }
        }
    } 

}