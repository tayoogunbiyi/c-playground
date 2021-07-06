#include <stdio.h>

int main(){
    printf("A char takes up %lu bytes\n\n", sizeof(char));
    printf("An int takes up %lu bytes\n\n", sizeof(int));
    printf("A long int takes up %lu bytes\n\n", sizeof(long int));
    printf("A float takes up %lu bytes\n\n", sizeof(float));
    printf("A double takes up %lu bytes\n\n", sizeof(double));

    return 0;
}