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
    fprintf(arq, "3.0 3.2 4.5 \n7.2 9.5 2.2");
    fclose(arq);
    arq = fopen(nome, "r");
    float n1, n2, n3, n4;
    while(fscanf(arq, "%f %f %f", &n1, &n2, &n3)!= EOF){
        printf("nota 1: %.1f    nota 2: %.1f   nota 3: %.1f\n", n1, n2, n3);
    }
    /*
    fscanf(arq, "%f %f %f %f", &n1, &n2, &n3, &n4);
    printf("n1 == %.1f, n2 == %.1f, n3 == %.1f, n4==%.1f", n1, n2, n3, n4);
    */
    //para remover uma nota especifica->->
    
    fclose(arq);
    return 1;
}