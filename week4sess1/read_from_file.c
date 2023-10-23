#include <stdio.h>
#include <stdlib.h>

int main() {
    char* filename = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
      
      return 1;
    }

    // number of characters which willbe read per line
    int buffer_size = 100;
    // a string which will hold each line as it's read in
    char line_buffer[buffer_size];

    int numbers[1000];

    int line_number_something=0;

    // fgets reads in ' while there is still stuff in file'
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer)); //atoi converts, 
        numbers[line_number_something] = atoi(line_buffer);
        line_number_something++;
    }

    printf("there were %d lines\n", line_number_something);

    fclose(file);
    return 0;
}