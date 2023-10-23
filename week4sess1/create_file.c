#include "utils.h"

int main () {
    char* filename = "data.txt";
    FILE *file = fopen (filename, "w"); // or "a", "w+", "a+" "w writes to the file"
    if (file == NULL) { // if for anycase the file doesnt open, 'null', basically nullifies it
        printf("Error opening file\n"); // if that happens, it prints...
        return 1; // if theres an error it returns it back to 0
    }

    fprintf(file, "Hello world!\n");// create fprintf like a print statement - fprint f sends it out to data.txt file

    fclose(file); // always, fclose your file
    return 0;
}