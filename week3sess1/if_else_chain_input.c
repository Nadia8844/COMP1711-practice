#include <stdio.h>

int main() {

    int mark;

    printf ("Enter the mark: \n");
    scanf ("%d", &mark);

    if (mark == 0 )
    {
        printf ("The mark of %d is zero\n", mark);
    }
    else if (mark >70 && mark <=100)
    {
        printf ("The mark od %d is a first\n", mark);
    }
    else if (mark >=60)
    {
        printf ("The mark od %d is a 2:1\n", mark);
    }
    else if (mark < 40)
    {
        printf ("The mark of %d is a fail\n", mark);
    }
    else if (mark >= 40)
    {
        printf ("The mark of %d is a pass\n", mark);
    }

    return 0;
}