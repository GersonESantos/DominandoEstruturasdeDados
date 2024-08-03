#include <stdio.h>
#include <stdlib.h>


int main() {
    float z = 2.5;
    float *fp = NULL;
    fp = &z;
    printf("&z  = %p\n", &z);
    printf("*&z  = %0.1f\n", *&z);
    printf("&fp  = %p\n", &fp);
    printf("*fp  = %0.1f\n", *fp);
    printf("**&fp  = %0.1f\n", **&fp);
    printf("----------------------------------------------\n");
    printf("conclusao *&z  = 2.5  *fp  = 2.5 **&fp  = 2.5 \n");
    return 0;
}
