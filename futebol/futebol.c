                    /// Tarcísio de Oliveira Rocha

#include "futebol.h"

//retorna a posição no vetor
int procura_time(Time PAIN[], char nome[] ,int tamanho){
    int i;
    for(i=0; i<tamanho; i++){
        if(strcmp(PAIN[i].nome_do_time,nome)==0){
            return i;
        }
    }
}

//realiza os calculos de cada jogo
void resultado_do_jogo(Time *A,Time *B,int placarA,int placarB){
    A->gols_marcados+=placarA;
    A->saldo_de_gols+= placarA-placarB;
    B->gols_marcados+=placarB;
    B->saldo_de_gols+= placarB-placarA;
    if(placarA > placarB){
        A->vitorias++;
        A->pontos += VITORIA;
    }
    if(placarA < placarB){
        B->vitorias++;
        B->pontos += VITORIA;
    }
    if(placarA==placarB){
        A->pontos += EMPATE;
        B->pontos += EMPATE;
    }
}// fim da função

// ordena segundo o algoritmop escolhido
void ordena(int x, Time A[],int tamanho){
    int inteiro;
    int i;

    if(x==SHELLSORT){
        shellSort(A,tamanho);
    }if(x==QUICKSORT){
        //printf("\nQuicksort: ");
        quicksort5(A,ZERO,tamanho-1);// por nome
        quicksort4(A,ZERO,tamanho-1);// gols matrcados
        quicksort3(A,ZERO,tamanho-1);// saldo de gols
        quicksort2(A,ZERO,tamanho-1);// vitorias
        quicksort1(A,ZERO,tamanho-1);// pontos
    }if(x!=QUICKSORT&&x!=SHELLSORT){
        printf("\n escolha um metodo de ordenação existe!\n");
    }
}// fim ordena






