#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000

struct lnode { /* A line of text */
    char *text; /* points to the text */
    struct lnode *prev; /* The previous line */
    struct lnode *next; /* The next line */
};

int main() /* print lines in reverse */
{
  struct lnode *head = NULL;
  struct lnode *tail = NULL;
  struct lnode *current;
  char line[MAXLINE];

  while(fgets(line, MAXLINE, stdin) != NULL) {
      char *save = (char *) malloc(strlen(line)+1);
      strcpy(save, line);

      struct lnode *new = (struct lnode *) malloc(sizeof(struct lnode));
      new->text = save;
      new->next = NULL;
      new->prev = tail;

      if ( head == NULL ) head = new;

      if ( tail != NULL ) tail->next = new;
      tail = new;
  }
  
  printf("Printing in reverse order, from last to first:\n");
  for (current = tail; current != NULL; current = current->prev ) {
      printf("%s", current->text);
  }

  printf("\nPrinting in ascending order, from first to last:\n");
  for (current = head; current != NULL; current = current->next ) {
      printf("%s", current->text);
  }

}