void read_line(char str[], int n) {
    int ch, i = 0;

    // Read characters until newline
    while ((ch = getchar()) != '\n') {
        
        if(isspace(ch))
            break;
        
        if (i < n) {         // Store characters until limit is reached
            str[i++] = ch;
        }

        
    }

    str[i] = '\0';          // Null-terminate the string
}