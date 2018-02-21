                    /// Tarc�sio de Oliveira Rocha

#include "futebol.h"

 /// ordena em rela��o aos pontos obtidos
void quicksort1(Time vet[], int esq, int dir){
    int pivo = esq, i,j;
    Time ch;         //Declara��o das variav�s e inicializa��o do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espa�os do vetor
        j = i;                      //atribui��o de valor
        if(vet[j].pontos < vet[pivo].pontos){     //verifica se o vetor da posi��o pivo � maior que de outra posi��o
         ch = vet[j];               //ch recebe o valor que � menor
         while(j > pivo){           //repete enquanto o j que � a posi��o do algarismo menor que o pivo ficar na posi��o 0
            vet[j] = vet[j-1];      //reorganiza a posi��o de vetores
            j--;                    //decremento para a organiza��o
         }
         vet[j] = ch;               // atribui��o da variavel menor que o pivo na posi��o inicial
         pivo++;                    // aumenta a posi��o do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo � maior que o final do vetor.
        quicksort1(vet,esq,pivo-1);      //final da execurs�o da fun��o
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo � menor, indicando que ainda estar dentro das limita��es do vetor
        quicksort1(vet,pivo+1,dir);      //chama a fun��o para eecutar novamente
    }
 }
/// ordena em rela��o as vitorias
 void quicksort2(Time vet[], int esq, int dir){
    int pivo = esq, i,j;
    Time ch;         //Declara��o das variav�s e inicializa��o do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espa�os do vetor
        j = i;
        //atribui��o de valor
        if(vet[j].vitorias < vet[pivo].vitorias){     //verifica se o vetor da posi��o pivo � maior que de outra posi��o
         ch = vet[j];               //ch recebe o valor que � menor
         while(j > pivo){           //repete enquanto o j que � a posi��o do algarismo menor que o pivo ficar na posi��o 0
            vet[j] = vet[j-1];      //reorganiza a posi��o de vetores
            j--;                    //decremento para a organiza��o
         }
         vet[j] = ch;               // atribui��o da variavel menor que o pivo na posi��o inicial
         pivo++;                    // aumenta a posi��o do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo � maior que o final do vetor.
        quicksort2(vet,esq,pivo-1);      //final da execurs�o da fun��o
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo � menor, indicando que ainda estar dentro das limita��es do vetor
        quicksort2(vet,pivo+1,dir);      //chama a fun��o para eecutar novamente
    }
 }

/// ordena em rela��o ao saldo de gols
 void quicksort3(Time vet[], int esq, int dir){
    int pivo = esq, i,j;
    Time ch;         //Declara��o das variav�s e inicializa��o do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espa�os do vetor
        j = i;                      //atribui��o de valor
        if(vet[j].saldo_de_gols < vet[pivo].saldo_de_gols){     //verifica se o vetor da posi��o pivo � maior que de outra posi��o
         ch = vet[j];               //ch recebe o valor que � menor
         while(j > pivo){           //repete enquanto o j que � a posi��o do algarismo menor que o pivo ficar na posi��o 0
            vet[j] = vet[j-1];      //reorganiza a posi��o de vetores
            j--;                    //decremento para a organiza��o
         }
         vet[j] = ch;               // atribui��o da variavel menor que o pivo na posi��o inicial
         pivo++;                    // aumenta a posi��o do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo � maior que o final do vetor.
        quicksort3(vet,esq,pivo-1);      //final da execurs�o da fun��o
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo � menor, indicando que ainda estar dentro das limita��es do vetor
        quicksort3(vet,pivo+1,dir);      //chama a fun��o para eecutar novamente
    }
 }

/// ordena em rela��o aos gols marcados
 void quicksort4(Time vet[], int esq, int dir){
    int pivo = esq, i,j;
    Time ch;         //Declara��o das variav�s e inicializa��o do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espa�os do vetor
        j = i;                      //atribui��o de valor
        if(vet[j].gols_marcados < vet[pivo].gols_marcados){     //verifica se o vetor da posi��o pivo � maior que de outra posi��o
         ch = vet[j];               //ch recebe o valor que � menor
         while(j > pivo){           //repete enquanto o j que � a posi��o do algarismo menor que o pivo ficar na posi��o 0
            vet[j] = vet[j-1];      //reorganiza a posi��o de vetores
            j--;                    //decremento para a organiza��o
         }
         vet[j] = ch;               // atribui��o da variavel menor que o pivo na posi��o inicial
         pivo++;                    // aumenta a posi��o do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo � maior que o final do vetor.
        quicksort4(vet,esq,pivo-1);      //final da execurs�o da fun��o
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo � menor, indicando que ainda estar dentro das limita��es do vetor
        quicksort4(vet,pivo+1,dir);      //chama a fun��o para eecutar novamente
    }
 }
 /// ordena por nome
 void quicksort5(Time vet[], int esq, int dir){
    int pivo = esq, i,j;
    Time ch;         //Declara��o das variav�s e inicializa��o do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espa�os do vetor
        j = i;                      //atribui��o de valor
        if(strcmp(vet[j].nome_do_time,vet[pivo].nome_do_time)!=-1){     //verifica se o vetor da posi��o pivo � maior que de outra posi��o
         ch = vet[j];               //ch recebe o valor que � menor
         while(j > pivo){           //repete enquanto o j que � a posi��o do algarismo menor que o pivo ficar na posi��o 0
            vet[j] = vet[j-1];      //reorganiza a posi��o de vetores
            j--;                    //decremento para a organiza��o
         }
         vet[j] = ch;               // atribui��o da variavel menor que o pivo na posi��o inicial
         pivo++;                    // aumenta a posi��o do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo � maior que o final do vetor.
        quicksort4(vet,esq,pivo-1);      //final da execurs�o da fun��o
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo � menor, indicando que ainda estar dentro das limita��es do vetor
        quicksort4(vet,pivo+1,dir);      //chama a fun��o para eecutar novamente
    }
 }
