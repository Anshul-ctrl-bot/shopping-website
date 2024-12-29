#include <stdio.h>

int main() {
    char name[50]; // Array to store the user's input

    printf("Enter your name: "); // Prompt the user
    scanf("%49s", name);         // Read user input (limit to 49 characters)
    
    printf("Hello, %s!\n", name); // Output the result

    return 0; // Exit the program
}
