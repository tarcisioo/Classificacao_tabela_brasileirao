                    /// Tarcísio de Oliveira Rocha

#include "futebol.h"
#include "hash_SBB.h"

// Insere obj na tabela de símbolos.
int posicao_hash(Celula cel,int Tamanho_da_tabela)
{
   int h, v;
   sscanf(cel.data,"%d",&v);//converte string para inteiro
   h = hash(v, Tamanho_da_tabela); // calculo do modulo
   return h;
}
