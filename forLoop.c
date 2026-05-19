#include <stdio.h>

void main(){
    int sum = 0;

    for(int i = 1; i <=50; i++){
        sum = sum +i;
    }

    printf("The sum of 1 to 50 is: %d", sum);

    for(int i = 0; i <=20; i +=2){
        printf("%d ", i);
    }

    // for(;;){
    //     printf("running infinte loop");
    // }

   for(int i = 0; i <=2; i++){
       for(int j = 0; j <=6; j++){
        printf("%d", j);
       } 
   }

   int i, j;

   for(i = 0, j = 10; i <= j; i++, j--)
        printf("i: %d, j: %d\n", i, j);
   

   int size = 4;     
   for(int row =1; row <= size; row++){
    for(int col = 1; col <= size; col++){
        printf("* ");
    }
    printf("\n");
   }

   

}