#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[] = "you can change a swallow can't you?";
    char *words[50];   // array of string pointers
    int count = 0;
    int in_word = 0;

    // Break sentence into words
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (!isspace(sentence[i]) && !in_word) {
            words[count++] = &sentence[i]; // store start of word
            in_word = 1;
        } 
        else if (isspace(sentence[i])) {
            sentence[i] = '\0';  // terminate current word
            in_word = 0;
        }
    }

    // Print in reverse order
    for (int i = count - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
