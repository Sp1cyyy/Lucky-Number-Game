/*
Ryan Sharma 12/3/2019
Lucky Number Game
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    // Generate new random seed
    srand(time(NULL));

    int random_number = rand() % 20 + 1;
    int MyNum = 0;
    
    // Get user input
    printf("Enter a Number between 1 and 20: ");   
    scanf("%d", &MyNum);

    // Loop to get inputs
    while(1){
        // Out of range test
        if (MyNum <= 0 || MyNum >=20){
            printf("The number you have entered is invalid, try again: ");
            scanf("%d", &MyNum);
        }
        
        // Wrong Guess
        if (MyNum != random_number){
            printf("The number you have entered is incorrect, please try again\n");
            printf("Enter a number between 1 and 20: ");
            scanf("%d", &MyNum);
        }

        // Correct Guess
        if (MyNum == random_number){
            printf("The number you have entered is Correct\n");

            //leave the while loop as they have got it correct
            break;
       }
    }
    return 0;
}
