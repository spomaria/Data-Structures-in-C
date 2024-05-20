#include <stdio.h>
#define HASHSIZE 100

main(){
    int hash();
    char word[HASHSIZE];

    scanf("%s", word);
    printf("The hash of %s is: \n%d\n", word, hash(word));
}

hash(s) /* form hash value for string s */
char *s;
{
  int hashval;

  for (hashval = 0; *s != '\0'; )
    hashval += *s++;
  return(hashval % HASHSIZE);
}