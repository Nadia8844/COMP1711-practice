#include <stdio.h>

int main()
{
    int numbers[10];
    int i=0;
    int total=0;
    float mean;

    for(i = 0; i < 10; i++)
    {
        pringf("\nEnter sa number: ");
        scanf("%d", &numbers[i]);
        total += numbers[i];
    }

    mean = total/10;

    printf("\n");

    for(i=0;i<10;i++){
        printf("%d\n", numbers[i]);
    }

    printf("")


}