#include <stdlib.h>
#include <stdio.h>

int main ()
{
    printf("An int is size: %ld\n", sizeof(int));

    printf("A double is size: %ld\n", sizeof(double));

    printf("A char is size %ld\n", sizeof(char));

    char* name = "m";
    printf("The word %s is size: %ld\n", name, sizeof(name));
}