#include <stdio.h>

void inicializa_matriz(int m[][4]){
	int i, i1;
	for (i = 0; i < 4; i++)
    {
        for (i1 = 0; i1 < 4; i1++)
        {
            m[i][i1] = 0;
        }
    }
}
void imprime_matriz(int m[4][4]){
		printf("         0 1 2 3\n");
        printf("       0 %d|%d|%d|%d \n", m[0][0], m[0][1], m[0][2], m[0][3]);
        printf("         ------\n");
        printf("       1 %d|%d|%d|%d \n", m[1][0], m[1][1], m[1][2], m[1][3]);
        printf("         ------\n");
        printf("       2 %d|%d|%d|%d \n", m[2][0], m[2][1], m[2][2], m[2][3]);
        printf("         ------\n");
        printf("       3 %d|%d|%d|%d \n", m[3][0], m[3][1], m[3][2], m[3][3]);        
}
int pode (int m[][4], int i, int j){
    int i1, j1;
    for(i1=0; i1<4;i1++){
        for(j1=0; j1<4;j1++){
            if (m[i1][j1]==1){
                if((i==i1)||(j==j1)) return 0;
                if((i-j==i1-j1)) return 0; 
            }
        }    
    }
    return 1;
}
int tenta(int m[4][4]){
    
}
int main(){

    int tabuleiro[4][4];
    inicializa_matriz(tabuleiro);
    imprime_matriz(tabuleiro);
}
