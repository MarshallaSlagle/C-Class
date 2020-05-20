#include <stdio.h>
#include <string.h>


struct Box //Declaring a Structure with specific members
{
    char Name[20]; //Declare character array to hold name as string
    int Length; //Declare length member
    int Width; //Declare width member
    int Height; //Declare Height member
    int Area; //Declare Area member
    int Perimeter; //Declare Perimeter member
};

void computeBox(struct Box *Rec); //Method Declaration
void printBox(struct Box Rec); //Method Declaration
int compareBox(struct Box R1, struct Box R2); //Method Declaration


void computeBox(struct Box *Rec) //method to compute area and perimeter of method.
{
    int area = 2*(Rec->Length * Rec->Width) + 2*(Rec->Length * Rec->Height) + 2*(Rec->Width * Rec->Height); //Formula calculation to find area of the box given the members of the structure passed as a parameter by reference through pointer
    int perimeter = 4*(Rec->Length) + 4*(Rec->Width) + 4*(Rec->Height); //Formula calculation to find perimeter of the box given the member of the structure passed as a parameter by reference through pointer

    Rec->Area = area; //initializing area member in structure passed reference to calculated area variable
    Rec->Perimeter = perimeter; //initializing perimeter member in structure passed reference to calculated area variable
}

void printBox(struct Box Rec) //method to print members of stucture after calculations
{
    printf("\n*****************************\n"); //prints border
    printf("\n%s: \n", Rec.Name); //prints Name of box passed by copy
    printf("\nLength: %d", Rec.Length); //prints Length of box passed by copy
    printf("\nWidth: %d", Rec.Width); //prints Width of box passed by copy
    printf("\nHeight: %d", Rec.Height); //prints Height of box passed by copy
    printf("\nArea: %d", Rec.Area); //prints Area of box passed by copy
    printf("\nPerimeter: %d", Rec.Perimeter); //prints Perimeter of box passed by copy
    printf("\n*****************************\n"); //prints border

}

int compareBox(struct Box R1, struct Box R2) //method to return comparison value based on the area of the two boxes
{
    if(R1.Area > R2.Area) //returns 1 if box 1 is larger then box 2
    {
        return 1; //returns 1 to main method
    }
    if(R1.Area == R2.Area) //returns 0 if both boxes are equal
    {
        return 0; //returns 0 to main method
    } 
    else //else statement to return value if box 1 is less then box 2
    {
        return -1; //returns -1 to main method
    }
}


int main() //main method
{

    struct Box R1 = {"Rec1", 10, 3, 4, 0, 0}; //initializes R1 of type structure type box

    struct Box R2 = {"Rec2", 15, 2, 5, 0, 0}; //initializes R2 of type structure type box

    computeBox(&R1); //calling computebox method to run caclulations, while sending R1 by reference with address
    computeBox(&R2); //calling computebox method to run caclulations, while sending R2 by reference with address

    int compare = compareBox(R1, R2); //calling comparebox method to compare both boxes and stores return value to compare variable

    printBox(R1); //calls printbox method to print members of structure for R1

    printf("\nComparison value between the boxes: %d\n", compare); //prints return value of comparison
    
    printBox(R2); //calls printbox method to print members of stucture for R2






    //used to demostrate different test
    struct Box R3 = {"Rec3", 5, 10, 2, 0, 0}; //initializes R3 of type structure type box

    struct Box R4 = {"Rec4", 10, 2, 5, 0, 0}; //initializes R4 of type structure type box

    computeBox(&R3); //calling computebox method to run caclulations, while sending R3 by reference with address
    computeBox(&R4); //calling computebox method to run caclulations, while sending R4 by reference with address

    compare = compareBox(R3, R4); //calling comparebox method to compare both boxes and stores return value to compare variable

    printBox(R3); //calls printbox method to print members of structure for R3

    printf("\nComparison value between the boxes: %d\n", compare); //prints return value of comparison
    
    printBox(R4); //calls printbox method to print members of stucture for R4



    //used to demostrate different test
    struct Box R5 = {"Rec5", 133, 22, 55, 0, 0}; //initializes R5 of type structure type box

    struct Box R6 = {"Rec6", 10, 3, 18, 0, 0}; //initializes R6 of type structure type box

    computeBox(&R5); //calling computebox method to run caclulations, while sending R3 by reference with address
    computeBox(&R6); //calling computebox method to run caclulations, while sending R4 by reference with address

    compare = compareBox(R5, R6); //calling comparebox method to compare both boxes and stores return value to compare variable

    printBox(R5); //calls printbox method to print members of structure for R5

    printf("\nComparison value between the boxes: %d\n", compare); //prints return value of comparison
    
    printBox(R6); //calls printbox method to print members of stucture for R6

}