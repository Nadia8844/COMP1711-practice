#include <stdio.h>

int main(){

    float width, length, area;

    printf("what is the width? ");
    scanf("%f", &width);
    printf("\nwhat is the length? ");
    scanf("%f", &length);

    area = width * length;

    printf("the are is: %g\n", area);

    return 0;
}