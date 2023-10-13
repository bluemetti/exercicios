#include <stdio.h>
#include "listase.h"

tp_item josephus(tp_listase **l, int gap){
    tp_listase *atu;
    atu = *l;
    tp_listase *ant;
    int i, a;
    a = tamanho_listase(*l);
    while(atu->prox!=NULL){
        atu = atu->prox;
    }
    atu->prox = *l;
    atu = atu->prox;
    while(a>1){
        for(i = 0; i<gap;i++){
            ant = atu;
            atu = atu->prox;
        }
        ant->prox = atu->prox;
        free(atu);
        atu = ant->prox;
        a=a-1;
    }
    return atu->info;
}


int main(){
    tp_listase *l;
    l = inicializa_lista();
    insere_listase_no_fim(&l, 5);
    insere_listase_no_fim(&l, 6);
    insere_listase_no_fim(&l, 8); 
    insere_listase_no_fim(&l, 3); 
    insere_listase_no_fim(&l, 7); 
    insere_listase_no_fim(&l, 1); 
    insere_listase_no_fim(&l, 9); 
    insere_listase_no_fim(&l, 8); 
    printf("%d", josephus(&l,3));
}