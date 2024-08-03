#include <stdio.h>
#include "cs50.h"

int main (void){
    string nome;
    nome = get_string("Digite Seu Nome:");
    printf("Hellooo %s", nome);
}