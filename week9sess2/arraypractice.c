#include <stdlib.h>
#include <stdio.h>

int main()
{
    char* address = malloc(200*sizeof(char));

    int* data = malloc (70*sizeof(int));

    int count;
    printf("Enter the number of values: ");
    scanf("%d", &count);

    double* samples = malloc(count*sizeof(double));
    if(!samples){
        printf("uh oh.....");
    }
}