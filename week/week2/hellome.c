#include <stdio.h>

int main(){
// setting up slots of memory for a string
char name[15];

// prompting the user
printf("hello please enter your name: ");
scanf("%s", name);
printf("your name is %s\n", name);

// printing out user's name
return 0;
}