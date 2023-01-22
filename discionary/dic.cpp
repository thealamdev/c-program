#include <stdio.h>
#include <string.h>

int main() {
    // Define a dictionary array
    char *dictionary[][2] = {
        {"hello", "Hi"},
        {"world", "the earth and all life on it, including human beings"},
        {"program", "a set of instructions for a computer to perform a specific task"},
        {"dictionary", "a reference book containing an alphabetical list of words, with information given for each word"},
        {"", ""} // Null-terminate the array
    };
    
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word); // Get the word to search for

    // Iterate through the dictionary array
    for (int i = 0; *dictionary[i][0]; i++) {
        // Compare the input word with the current word in the dictionary
        if (strcmp(word, dictionary[i][0]) == 0) {
            printf("%s: %s\n", dictionary[i][0], dictionary[i][1]);
            return 0;
        }
    }

    // If the word is not found in the dictionary
    printf("Word not found in the dictionary.\n");
    return 0;
}
