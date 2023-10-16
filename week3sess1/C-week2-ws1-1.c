#include <stdio.h>

int main() {

    int value;

    printf ("Enter a value: \n");
    scanf ("%d", &value);

    if (value == 0)
    {
        printf ("This %d value is zero\n", value);
    }
    else if (value >= 1)
    {
        printf ("The value of %d is positive\n", value);
    }
    else if (value <= -1)
    {
        printf ("The value of %d is negative\n", value);
    }

    return 0;
}