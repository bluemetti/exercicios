#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arq;
    char msg[20], nome[20];

    scanf("%s", nome);
    arq = fopen(nome, "w");

    if(!arq) return 0;

    printf("\nMensagem 1:\n");
    scanf("%s", msg);
    fprintf(arq, strcat(msg, "\n"));
    fclose(arq);

    return 1;
}