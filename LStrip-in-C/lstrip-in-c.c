#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "   Hello   World    ";
    void py_lstrip();
    printf("-%s-\n", s1);
    py_lstrip(s1);
    printf("-%s-\n", s1);
}

void py_lstrip(char *inp){
    /*
        Given any string, perform the followng tasks
        1. If the first element is a blank, tab or new line,
            i. shift all characters one step to the left i.e. the first element is eliminated
            ii. Call the function again
        2. If the first element is not a blank, tab or new line, return
    */
    if(!(inp[0] == ' ' | inp[0] == '\t' | inp[0] == '\n' )){
        return;
    } else {
        int len = strlen(inp);
        int i, j;
    
        for(i = 0, j = 0; i < len; ){
            inp[j++] = inp[++i];
        }
        
    } 
    py_lstrip(inp);
     
}