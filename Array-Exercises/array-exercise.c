#include <stdio.h>
int main() {
   int i, j, v, arr[10], arr2[10];
   int len = 10 - 1;
   
   for(i=0;i<10;i++) {
       scanf("%d", &v);
       arr[i] = v;
   }
   
   for(i=len; i >= 0; i--) printf("numb[%d] = %d\n", i, arr[i]);
   printf("\n");
   printf("Searching for entries equal to 100\n");
   printf("\n");
   /* Search for entries that equal 100*/
   for(i=0, j = 0;i<10;i++) {
       if(arr[i] == 100) {
         printf("Found 100 at %d\n", i);
         j++;
       }
   }
   printf("\n");
   printf("Found %d entries with 100\n", j);
}