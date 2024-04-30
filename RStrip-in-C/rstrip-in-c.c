#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "   Hello   World    ";
    void py_rstrip();
    py_rstrip(s1);
    printf("-%s-\n", s1);
}

void py_rstrip(char *inp){
    int len = strlen(inp);
    int start = len - 1;
    int i;
    for(i = start; i > 0; i --){
        if(inp[i] == ' '){
            inp[i] = '\0';
        } else break;
    }
    
}