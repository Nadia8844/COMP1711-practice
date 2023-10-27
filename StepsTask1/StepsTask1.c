#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main() {
    // Define the size of the array and create it
    const int MAX_ENTRIES = 100;
    FITNESS_DATA data[MAX_ENTRIES];

    // Define the file pointer and open the file
    FILE *file;
    file = fopen("fitness_data.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    // Define variables for tokenized data
    char date[11];
    char time[6];
    char steps[10];
    char line[100];

    int index = 0;

    // Read each line from the file
    while (fgets(line, sizeof(line), file) != NULL) {
        // Tokenize the line
        tokeniseRecord(line, ",", date, time, steps);

        // Store the tokenized data in the array
        strcpy(data[index].date, date);
        strcpy(data[index].time, time);
        data[index].steps = atoi(steps);

        index++;
    }

    // Close the file
    fclose(file);

    // Print the stored data for verification
    for (int i = 0; i < index; i++) {
        printf("Date: %s, Time: %s, Steps: %d\n", data[i].date, data[i].time, data[i].steps);
    }

    return 0;
}

