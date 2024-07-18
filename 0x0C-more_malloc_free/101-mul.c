#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Function to check if a string represents a valid positive number
int is_valid_number(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0; // Invalid character found
        }
        str++;
    }
    return 1; // All characters are digits
}

int main(int argc, char *argv[]) {
    // Check if the number of arguments is correct
    if (argc != 3) {
        fprintf(stderr, "Error\n");
        exit(98);
    }

    // Validate num1 and num2
    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        fprintf(stderr, "Error\n");
        exit(98);
    }

    // Convert arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Perform multiplication
    int result = num1 * num2;

    // Print the result
    printf("%d\n", result);

    return 0;
}

