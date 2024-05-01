#include <stdio.h>
#include <string.h>
int main() {
    char line[1000];
    void process();
    strcpy(line,"Hi there and welcome to LBS290");
    process(line);
    strcpy(line,"I love C");
    process(line);
}

void process(char *line){
    printf("\nString: %s\n", line);
    int i, nc=0;
    int len = strlen(line);
    for (i = 0; i < len; i++){
        if(line[i] != '\0') nc++;
    }
    
    printf("Count=%d\n", nc);
    if(nc > 10) {
        printf("The ninth character is: %c\n", line[9]);
    }
    
    for (i = 0; i < len; i++){
        if(line[i] == ' ') line[i] = '-';
    }
    
    printf("String: %s\n", line);
}