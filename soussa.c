#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4

void limpaMatriz(char m[][4]){
	int i, i1;
	for (i = 0; i < 4; i++)
    {
        for (i1 = 0; i1 < 4; i1++)
        {
            m[i][i1] = '~';
        }
    }
}

void imprimeMatriz(char m[4][4]){
		printf("         0 1 2 3\n");
        printf("       0 %c|%c|%c|%c \n", m[0][0], m[0][1], m[0][2], m[0][3]);
        printf("         ------\n");
        printf("       1 %c|%c|%c|%c \n", m[1][0], m[1][1], m[1][2], m[1][3]);
        printf("         ------\n");
        printf("       2 %c|%c|%c|%c \n", m[2][0], m[2][1], m[2][2], m[2][3]);
        printf("         ------\n");
        printf("       3 %c|%c|%c|%c \n", m[3][0], m[3][1], m[3][2], m[3][3]);        
}

int validaMatriz (char m[][4], int i, int j){
    int i1, j1;
    for(i1=0; i1<4;i1++){
        for(j1=0; j1<4;j1++){
            if (m[i1][j1]=='R'){
                if((i==i1)||(j==j1)) return 0;
                if((i-j==i1-j1)) return 0; 
            }
        }    
    }
    return 1;
}

int posicionaRainha(char matriz[TAM][TAM], int col){ //col serve como a coluna da matriz

    if (col>=TAM)
       return 1;
       
    int i;
    
    for (i=0; i<TAM; i++){     //percorre as linhas de cada coluna
    
		if ( validaMatriz(matriz, i, col) ) { //verifica se a posição está correta
			matriz[i][col] = 'R';
			
    		if (posicionaRainha(matriz, col+1) )	
 				return 1;
 			else
 				matriz[i][col] = '~';					
		}
	}
    return 0;	
}



int main(){
	int col=0;  //quantidade de rainhas posicionadas corretamente;
	char matriz[TAM][TAM];
	limpaMatriz(matriz);
	posicionaRainha(matriz, col);
	imprimeMatriz(matriz);
	return 0;
}
