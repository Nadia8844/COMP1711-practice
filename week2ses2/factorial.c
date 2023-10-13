#include <stdio.h>

int main(){
    int n, factorial=1;
    printf("Enter a variable: ");
    scanf("%d", &n);
    for (int i=1; i<=n;i++) {
        factorial*=i;
    }
    printf("The result is %d",factorial);

    return 0;
}