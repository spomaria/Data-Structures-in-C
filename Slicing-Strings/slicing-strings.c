#include <stdio.h>
#include <string.h>

void deleteSubstring(char *str, int start, int length) {
    int i, len;

    /* Get the length of the string */
    len = strlen(str);

    /* Ensure start index is within bounds */ 
    if (start < 0 || start >= len) {
        printf("Invalid start index\n");
        return;
    }

    /* Shift characters to overwrite the deleted portion */
    for (i = start; i < len - length; i++) {
        str[i] = str[i + length];
    }

    /* Null-terminate the string after shifting */ 
    str[len - length] = '\0';
}

int main() {
    char str[] = "This is a test string";

    printf("Original string: %s\n", str);

    /*Delete substring starting from index 5 with length 4*/
    deleteSubstring(str, 5, 4);

    printf("Modified string: %s\n", str);

    return 0;
}
