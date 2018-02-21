                    /// Tarcísio de Oliveira Rocha

#include "futebol.h"

/// metodo 1 shellsort OK
void shellSort(Time vet[], int tamanho){
    //printf("\nShellsort: ");

    int i , j;
    Time value;
    /// ordena por nome
    int gap = 1;
    while(gap < tamanho) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < tamanho; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && strcmp(value.nome_do_time,vet[j].nome_do_time)!=-1){
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }// fim do for
    }
    /// ordena por gols marcados
    gap = 1;
    while(gap < tamanho) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < tamanho; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value.gols_marcados < vet[j].gols_marcados){
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }// fim do for
    }
    /// ordena por saldo de gols
    gap = 1;
    while(gap < tamanho) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < tamanho; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value.saldo_de_gols < vet[j].saldo_de_gols){
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }// fim do for
    }
    /// ordena por vitorias
    gap = 1;
    while(gap < tamanho) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < tamanho; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value.vitorias < vet[j].vitorias){
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }// fim do for
    }
    /// ordena por pontos
    gap = 1;
    while(gap < tamanho) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < tamanho; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value.pontos < vet[j].pontos){
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }// fim do for
    }
}// fim da função
