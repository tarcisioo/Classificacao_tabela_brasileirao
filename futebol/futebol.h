                    /// Tarcísio de Oliveira Rocha

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ZERO 0
#define SHELLSORT 1
#define QUICKSORT 2
#define NTIME 30 // Este é o valor Maximo para o nome do time.
#define VITORIA 3
#define EMPATE 1

typedef struct Time{
    char nome_do_time[NTIME];
    int pontos;
    int vitorias;
    int saldo_de_gols;
    int gols_marcados;
}Time;

