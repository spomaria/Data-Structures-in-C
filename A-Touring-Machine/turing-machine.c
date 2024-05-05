#include <stdio.h>
#include <string.h>

int main()
{
    char memory[256], token[256];
    int position = 0, value, i = 0;
    int len = strlen(memory);
    
    while(scanf("%s",token) == 1 ) {
        if(strcmp(token, ">") == 0 ) {
            position = ++i ;
        }
        else if(strcmp(token, "<") == 0) {
            position = --i ;
        }
        else {
            printf("%s\n", token);
            sscanf(token, "%d", &value);
            memory[position] = value;
        }
        i = position;
    }

    printf("Memory:\n%s\n", memory);
    
}
