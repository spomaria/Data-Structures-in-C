#include <stdio.h>
#include <string.h>
int main() {
    char line[100];
    char keep[100];
    char message[] = "Enter two strings";

    printf("%s\n", message);
    fgets(line, sizeof(line), stdin);
    strcpy(keep, line);
    keep[strcspn(keep, "\n")] = ' ';
    strcat(keep, "& ");
    
    fgets(line, sizeof(line), stdin);
    strcat(keep, line);
    printf("%s\n",keep);
    
}