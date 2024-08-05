#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b, *p1, *p2;
    p1 = NULL;
    p2 = NULL;
    
    printf("--------------Teste De Mesa-------------\n");
    printf("a  b       p1  *p2 p2       *p2 -----------------\n");
    //printf("             %d     %d\n", *p1, *p2);
    printf("#  #       #    -   #       -\n");
    a = 4;
  
    printf("%d  #       #    -   #       -\n", a);
 
    b = 3;
    printf("%d " " %d       #    -   #\n", a, b);
    p1 = &a;
    printf("%d  %d  %p  -   #       -\n", a, b, &p1);
    printf("%d  %d  %p  %d   #      -\n", a, b, &p1, *p1);
    p2 = p1;
    printf("%d  %d  %p  %d   %p     %d\n", a, b, &p1, *p1, &p2, *p2);
    *p2 = *p1 + 3;
    printf("%d  %d  %p  %d   %p     %d\n", a, b, &p1, *p1, &p2, *p2);
     b = b * (*p1);
     printf("%d  %d  %p  %d   %p     %d\n", a, b, &p1, *p1, &p2, *p2);
    (*p2)++;
    printf("%d  %d  %p  %d   %p     %d\n", a, b, &p1, *p1, &p2, *p2);
    p1 = &b;
     
    printf("%d  %d  %p  %d   %p     %d\n", a, b, &p1, *p1, &p2, *p2);
    printf("---------------------------------------------\n");
   printf("%d %d\n", *p1, *p2);


    printf("%d  %d\n", a, b);

    return 0;
}