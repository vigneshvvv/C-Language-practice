#include <stdio.h>

void main(){
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if(score >= 90){
        printf("you have scored good marks \n");
    }else if(score == 50){
        printf("you have acheived average score \n");
    }else if(score >= 80){
        printf("Grade B \n");
    }else if(score != 100){
        printf("you haven't got full marks");
    }
    else {
        printf("sorry you have failed \n");
    }

    int a = 10;
    int b = 30;

    int max = (a > b) ? a : b;
    printf("The large number is %d\n", max);

    int input;
    printf("Enter a number : ");
    scanf("%d", &input);
    printf("THe number is %s.\n", (input %2 == 0)? "EVEN" : "ODD");

}