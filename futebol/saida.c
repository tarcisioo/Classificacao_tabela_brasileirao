                    /// Tarcísio de Oliveira Rocha

#include "futebol.h"

void solucao(FILE *saida, Time PAIN){
    char nome[NTIME];
    int pontos,vitorias,saldo_de_gols,gols_marcados;
    gols_marcados = PAIN.gols_marcados;
    strcpy(nome,PAIN.nome_do_time);
    pontos = PAIN.pontos;
    saldo_de_gols = PAIN.saldo_de_gols;
    vitorias = PAIN.vitorias;
    fprintf(saida,"%s %d %d %d %d\n",nome,pontos,vitorias,saldo_de_gols,gols_marcados);
}// fim da função
