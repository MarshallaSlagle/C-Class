#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char serialcode[]); //Method Declaration


bool isValid(char serialcode[]) //method to determine if serialcode is acceptable
{
    int length = strlen(serialcode); //calculates length of seerialcode string and initializes it to length variable
    char endL1 = serialcode[length-2]; //finds 2nd to last character in array and initializes to variable
    char endL2 = serialcode[length-1]; //finds last character in array and initializes to variable
    int comp = strncmp(serialcode, "970", 3); //compares first 3 characters in array and initializes variable to compare value

    bool lengthB; //declare boolean variable to store truthful factor of length
    bool endB; //declare boolean variable to store truthful factor of last 2 characters
    bool compB; //declare boolean variable to store truthful factor of first 3 characters

    if(length<=10 && length>=8) //initializes lengthB to true if length is between 8 and 10
    {
        lengthB = true; //initializes lengthB to true
    }
    else 
    {
        lengthB = false; //initializes lengthB to false if above statement is not true
    }

    if(endL1=='S' && endL2=='L') //initializes endB to true of last 2 characters are "SL"
    {
        endB = true; //initializes endB to true
    }
    else
    {
        endB = false; //initializes endB to false if above statement is not true
    }

    if(comp==0) //initializes compB to true if comparison value is equal to 0
    {
        compB = true; //initializes compB to true
    }
    else
    {
        compB = false; //initializes compB to false if above statement is not true
    }

    if(lengthB == true && endB == true && compB == true) //returns true value to main method if lengthB, endB, and compB are all true
    {
        return true; //returns true to main method
    }
    if(compB == false) //if compB is false will print error message for the first 3 characters
    {
        printf("\n** The Serialcode does not begin with 970 **\n"); //prints error message
    }
    if(endB == false) //if endB is false will print error message for the last 2 characters
    {
        printf("\n** The Serialcode does not end with SL **\n"); //prints error message
    }
    if(lengthB == false) //if lengthB is false will print error message for the length of Serialcode
    {
        printf("\n** The Serialcode is not between 8 and 10 characters **\n"); //prints error message
    }
    if(lengthB == false || endB == false || compB == false) //if any boolean determinant variable is false will return false to main method
    {
        return false; //returns false to main method
    }
    else //else statment to provide compiler with option if non of the above statements are truthful in any fashion
    {
        printf("\n** An error has occured the Serialcode could not be confirmed for errors **\n"); //prints error message for error in determination
        return false; //returns false do to inability to determine if Serialcode is correct
    }
  
}


int main() //main method
{
    char serialcode1[] = "89238498723498KL"; //initializes string to character array called serialcode1
    char serialcode2[] = "97083498SL"; //initializes string to character array called serialcode2

    printf("\n--------------------------------------\n"); //prints border
    if(isValid(serialcode1)) //if statement to determine if return value is truthful
    {
        printf("\nSerialcode 1 is a valid code\n"); //prints successful message. That serialcode is valid
    }
    else
    {
        printf("\nSerialcode 1 is an invalid code\n"); //prints message that serialcode is invalid
    }

    printf("\n--------------------------------------\n"); //prints border

    if(isValid(serialcode2)) //if statement to determine if return value is truthful
    {
        printf("\nSerialcode 2 is a valid code\n"); //prints successful message. That serialcode is valid
    }
    else
    {
        printf("\nSerialcode 2 is an invalid code\n"); //prints message that serialcode is invalid
    }

    printf("\n--------------------------------------\n"); //prints border




    //used to demonstrate code with different test
    char serialcode3[] = "97083498AL"; //initializes string to character array called serialcode3 -- used to test code

    if(isValid(serialcode3)) //if statement to determine if return value is truthful
    {
        printf("\nSerialcode 3 is a valid code\n"); //prints successful message. That serialcode is valid
    }
    else
    {
        printf("\nSerialcode 3 is an invalid code\n"); //prints message that serialcode is invalid
    }

    printf("\n--------------------------------------\n"); //prints border



    //used to demonstrate code with different test
    char serialcode4[] = "17083498SL"; //initializes string to character array called serialcode3 -- used to test code

    if(isValid(serialcode4)) //if statement to determine if return value is truthful
    {
        printf("\nSerialcode 4 is a valid code\n"); //prints successful message. That serialcode is valid
    }
    else
    {
        printf("\nSerialcode 4 is an invalid code\n"); //prints message that serialcode is invalid
    }

    printf("\n--------------------------------------\n"); //prints border


    //used to demonstrate code with different test
    char serialcode5[] = "970SL"; //initializes string to character array called serialcode3 -- used to test code

    if(isValid(serialcode5)) //if statement to determine if return value is truthful
    {
        printf("\nSerialcode 5 is a valid code\n"); //prints successful message. That serialcode is valid
    }
    else
    {
        printf("\nSerialcode 5 is an invalid code\n"); //prints message that serialcode is invalid
    }

    printf("\n--------------------------------------\n"); //prints border


}