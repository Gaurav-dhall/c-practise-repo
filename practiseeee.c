#include <stdio.h>
#include <ctype.h>  // For the toupper function
#include <string.h> // For the strlen function

int main() {
    char lowerCaseString[100]; // Declare a character array to hold the input string

    // Prompt the user to enter a lowercase string
    printf("Enter a lowercase string: ");
    scanf("%s", lowerCaseString); // Read the input string using scanf

    // Get the length of the string
    int length = strlen(lowerCaseString);

    // Convert the string to uppercase
    for(int i = 0; i < length; i++) {
        lowerCaseString[i] = toupper(lowerCaseString[i]);
    }

    // Output the resulting uppercase string
    printf("Uppercase string: %s\n", lowerCaseString);

    return 0;
}
