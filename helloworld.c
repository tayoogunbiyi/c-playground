#include <stdio.h>
#include <string.h>

#define PI 3.14


int main(){
    char letter = 'D'; // any 256 chars 
    int x = 29;
    float f1 = 0.5654323;

    printf("Hello world! \n");

    printf("X is %d\n", x);

    printf("f1 is %.5f\n",f1);

    printf("letter is %c\n",letter);

    char myName[] = "Eyitayo";

    printf("my name is %s\n", myName);

    strcpy(myName, "Ayitayo");

    printf("my name is %s \n", myName);

    char input;

    printf("Enter a character : ");
    scanf(" %c", &input);

    printf("You entered %c \n", input);

    char firstName[30], lastName[30];

    printf("What is your name ? ");

    scanf(" %s %s", firstName, lastName);

    printf("Your name is %s %c %s \n", firstName, input, lastName);

    printf("Sum of 2 floats -> %f \n", 5.55 + 1.11);

    int n1 = 12;
    int n2 = 15;

    printf("n1/n2 -> %f \n", (float) n1/n2);
 
    return 0;
}