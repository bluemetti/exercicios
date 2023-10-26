#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq;
     char msg[50], a[20], registro[20];
    scanf("%s", a);
    arq = fopen(a, "r+");
    if(!arq)printf("deu erro\n");
    printf("digite a mensagem\n");  
    scanf(" %[^\n]s", &a);
    fprintf(arq,"%s\n", a);
    rewind(arq);
    fclose(arq);
    arq = fopen(a, "r");
    while(fgets(registro, sizeof(registro),arq)){
        printf("%s", registro);
    }
    fclose(arq);
}
