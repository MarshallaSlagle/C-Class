#include <stdio.h>

//Marshall Slagle
//HW1_Marshall_Slagle.c


int main() //Main Method
{
    srand(time(NULL)); //initializes the random fuction for the main method. 

    printf("\n\n   Welcome to the Game of:  \n    Rock, Paper, Sissors    \n\n"); //Welcome Message
    printf("Here's How You Play: \n\n"); //Rules
    printf("The objective is to beat the computers choice. \nA Rock can win by crushing Sissors. \nPaper can win by covering Rock. \nScissors can cut Paper.\n\n"); //Rules
    printf("Enter the number 0 for Rock, 1 for Paper, and 2 for Scissors\n\n"); //Instructions on how to interact with the program

    printf(":-) Are you ready to play? :-)\n\n"); //Prompt message
 
    int counter = 0; //initializes counter to zero for the begining of the loop
    int userInput; //initializes userInput variable, to store user playing options
    int computerInput; //initializes computerInput, to store computer random generated playing option
    int replay; //initializes replay variable to store input from user to determine if player wants to replay

    while(counter != -1) //while loop that will continue, untill the replay value runs the if statement to change the counter to -1
    {
        printf("\nPlease enter your move: \n"); //prompt to enter value of desired move
        scanf("%d", &userInput); //stores userinput to variable

        int random = rand() % 3; //generates random number for computerInput
        computerInput = random; //stores random number value to the computerInput variable

        if(userInput==0 && computerInput==0) //If Statemtent for if both played rock
        {
            printf("You played Rock. \nThe Computer also played Rock. \nNo one wins.**"); //output message for both playing rock
        }
        if(userInput==0 && computerInput==1) //If Statement for user playing rock and computer playing paper
        {
            printf("You played Rock. \nThe Computer played Paper. \nThe Computer wins.**"); //output message for user playing rock and computer playing paper
        }
        if(userInput==0 && computerInput==2) //If statement for user playing rock and comptuer playing sissors
        {
            printf("You played Rock. \nThe Computer played Sissors. \nYou win.**"); //output message for the user playing rock and the computer playing sissors
        }


        if(userInput==1 && computerInput==0) //If statement for user playing paper and computer playing rock
        {
            printf("You played Paper. \nThe Computer played Rock. \nYou Win.**"); //output statemetn for user playing paper and computer playing rock
        }
        if(userInput==1 && computerInput==1) //If statement for if both played paper
        {
            printf("You played Paper. \nThe Computer also played Paper. \nNo one wins.**"); //output for is both played paper
        } 
        if(userInput==1 && computerInput==2) //If statement for user playing paper and computer playing sissors
        {
            printf("You played Paper. \nThe Computer played Sissors. \nThe Computer Wins.**"); //outpur for user playing paper and computer playing sissors
        }


        if(userInput==2 && computerInput==0) //If statement for user playing sissors and computer playing rock
        {
            printf("You played Sissors. \nThe Computer played Rock. \nThe Computer wins.**"); //output for user playing sissors and computer playing rock
        }
        if(userInput==2 && computerInput==1) //If statement for user playing sissors and compuer playing paper
        {
            printf("You played Sissors. \nThe Computer played Paper. \nYou win.**"); //output for user playing sissors and computer playing rock
        }
        if(userInput==2 && computerInput==2) //If statement for if both played sissors
        {
            printf("You played Sissors. \nThe Computer also played Sissors. \nNo one wins.**"); //output for if both played sissors
        }

        


        printf("\n\nWould you like to play again???  Enter 1 for Yes, 0 for No.\n\n"); //prompt to play game again
        scanf("%d", &replay); //stores input to replay variable

        if(replay==1) //If statement for if replay equals 1
        {
            counter++; //If replay equals 1 counter will add 1
        }
        else //Else statement for if replay does not equal 1
        {
            counter = -1; //If replay does not equal 1 counter will be set to -1 ending the loop
        }
    }

    printf("\n\nThankyou for Playing :-)\n"); //Output message ending the Game.

}