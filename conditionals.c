#include <stdio.h>

int main(){
    int x = 10;
    int y = 15;

    printf("x > y ? %d\n", x > y);

    if (x > y){
        printf("x is greater than y\n");
    }else{
        printf("x is less than or equal to y\n");
    }

    int age = 22;

    char *legalAge = age >= 21 ? "true" : "false";

    printf("Is the customer of legal age ? %s \n\n", legalAge);

    return 0;
}