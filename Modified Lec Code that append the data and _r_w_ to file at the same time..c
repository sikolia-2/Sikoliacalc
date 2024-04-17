
#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    // Open the file in append mode to add new data
    file = fopen("file.txt", "a+"); // Opening file in append mode
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Prompt the user to enter some text
    printf("Enter some text: ");
    fgets(buffer, sizeof(buffer), stdin);

    // Set the file pointer to the end of the file
    fseek(file, 0, SEEK_END);

    // Write the entered text to the file
    fputs(buffer, file);

    // Rewind the file pointer to the beginning to read from it
    rewind(file);

    // Read from the file and simultaneously write to it
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Print the read content
        printf("%s", buffer);
        // Write the content back to the file (appending)
        fputs(buffer, file);
    }

    // Close the file
    fclose(file);

    return 0;
}


/*In this modified code:

- After opening the file in append mode, we use `fseek()` to move the file pointer to the end of the file (`SEEK_END`) before writing the user input. This ensures that the content is appended to the end of the file.
- Subsequently, we rewind the file pointer to the beginning of the file to read from it.
- Inside the loop, we read each line of text from the file, print it to the console, and simultaneously write it back to the end of the file, effectively appending the content while reading it.*/