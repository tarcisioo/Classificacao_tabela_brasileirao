                    /// Tarcísio de Oliveira Rocha

#include "futebol.h"

 /// ordena em relação aos pontos obtidos
void quicksort1(Time vet[], int esq, int dir){
    int pivo = esq, i,j;
    Time ch;         //Declaração das variavés e inicialização do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espaços do vetor
        j = i;                      //atribuição de valor
        if(vet[j].pontos < vet[pivo].pontos){     //verifica se o vetor da posição pivo é maior que de outra posição
         ch = vet[j];               //ch recebe o valor que é menor
         while(j > pivo){           //repete enquanto o j que é a posição do algarismo menor que o pivo ficar na posição 0
            vet[j] = vet[j-1];      //reorganiza a posição de vetores
            j--;                    //decremento para a organização
         }
         vet[j] = ch;               // atribuição da variavel menor que o pivo na posição inicial
         pivo++;                    // aumenta a posição do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo é maior que o final do vetor.
        quicksort1(vet,esq,pivo-1);      //final da execursão da função
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo é menor, indicando que ainda estar dentro das limitações do vetor
        quicksort1(vet,pivo+1,dir);      //chama a função para eecutar novamente
    }
 }
/// ordena em relação as vitorias
 void quicksort2(Time vet[], int esq, int dir){
    int pivo = esq, i,j;
    Time ch;         //Declaração das variavés e inicialização do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espaços do vetor
        j = i;
        //atribuição de valor
        if(vet[j].vitorias < vet[pivo].vitorias){     //verifica se o vetor da posição pivo é maior que de outra posição
         ch = vet[j];               //ch recebe o valor que é menor
         while(j > pivo){           //repete enquanto o j que é a posição do algarismo menor que o pivo ficar na posição 0
            vet[j] = vet[j-1];      //reorganiza a posição de vetores
            j--;                    //decremento para a organização
         }
         vet[j] = ch;               // atribuição da variavel menor que o pivo na posição inicial
         pivo++;                    // aumenta a posição do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo é maior que o final do vetor.
        quicksort2(vet,esq,pivo-1);      //final da execursão da função
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo é menor, indicando que ainda estar dentro das limitações do vetor
        quicksort2(vet,pivo+1,dir);      //chama a função para eecutar novamente
    }
 }

/// ordena em relação ao saldo de gols
 void quicksort3(Time vet[], int esq, int dir){
    int pivo = esq, i,j;
    Time ch;         //Declaração das variavés e inicialização do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espaços do vetor
        j = i;                      //atribuição de valor
        if(vet[j].saldo_de_gols < vet[pivo].saldo_de_gols){     //verifica se o vetor da posição pivo é maior que de outra posição
         ch = vet[j];               //ch recebe o valor que é menor
         while(j > pivo){           //repete enquanto o j que é a posição do algarismo menor que o pivo ficar na posição 0
            vet[j] = vet[j-1];      //reorganiza a posição de vetores
            j--;                    //decremento para a organização
         }
         vet[j] = ch;               // atribuição da variavel menor que o pivo na posição inicial
         pivo++;                    // aumenta a posição do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo é maior que o final do vetor.
        quicksort3(vet,esq,pivo-1);      //final da execursão da função
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo é menor, indicando que ainda estar dentro das limitações do vetor
        quicksort3(vet,pivo+1,dir);      //chama a função para eecutar novamente
    }
 }

/// ordena em relação aos gols marcados
 void quicksort4(Time vet[], int esq, int dir){
    int pivo = esq, i,j;
    Time ch;         //Declaração das variavés e inicialização do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espaços do vetor
        j = i;                      //atribuição de valor
        if(vet[j].gols_marcados < vet[pivo].gols_marcados){     //verifica se o vetor da posição pivo é maior que de outra posição
         ch = vet[j];               //ch recebe o valor que é menor
         while(j > pivo){           //repete enquanto o j que é a posição do algarismo menor que o pivo ficar na posição 0
            vet[j] = vet[j-1];      //reorganiza a posição de vetores
            j--;                    //decremento para a organização
         }
         vet[j] = ch;               // atribuição da variavel menor que o pivo na posição inicial
         pivo++;                    // aumenta a posição do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo é maior que o final do vetor.
        quicksort4(vet,esq,pivo-1);      //final da execursão da função
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo é menor, indicando que ainda estar dentro das limitações do vetor
        quicksort4(vet,pivo+1,dir);      //chama a função para eecutar novamente
    }
 }
 /// ordena por nome
 void quicksort5(Time vet[], int esq, int dir){
    int pivo = esq, i,j;
    Time ch;         //Declaração das variavés e inicialização do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espaços do vetor
        j = i;                      //atribuição de valor
        if(strcmp(vet[j].nome_do_time,vet[pivo].nome_do_time)!=-1){     //verifica se o vetor da posição pivo é maior que de outra posição
         ch = vet[j];               //ch recebe o valor que é menor
         while(j > pivo){           //repete enquanto o j que é a posição do algarismo menor que o pivo ficar na posição 0
            vet[j] = vet[j-1];      //reorganiza a posição de vetores
            j--;                    //decremento para a organização
         }
         vet[j] = ch;               // atribuição da variavel menor que o pivo na posição inicial
         pivo++;                    // aumenta a posição do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo é maior que o final do vetor.
        quicksort4(vet,esq,pivo-1);      //final da execursão da função
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo é menor, indicando que ainda estar dentro das limitações do vetor
        quicksort4(vet,pivo+1,dir);      //chama a função para eecutar novamente
    }
 }
