                    /// Tarcísio de Oliveira Rocha

#include "futebol.h"
#include "hash_SBB.h"

void iinsere_aqui(Celula reg, struct sbb **ptr,int *incli, int *fim){
    struct sbb *no = malloc(sizeof(struct sbb));
    no->reg = reg;
    no->esq = NULL;
    no->dir = NULL;
    no->esqtipo = SBB_VERTICAL;
    no->dirtipo = SBB_VERTICAL;
    *ptr = no;
    *incli = SBB_HORIZONTAL;
    *fim = FALSE;
}

void ee(struct sbb **ptr){

    struct sbb *no = *ptr;
    struct sbb *esq = no->esq;
    no->esq = esq->dir;
    esq->dir = no;
    esq->esqtipo = SBB_VERTICAL;
    no->esqtipo = SBB_VERTICAL;
    *ptr = esq;
}

void dd(struct sbb **ptr){
    struct sbb *no = *ptr;
    struct sbb *dir = no->dir;
    no->dir = dir->esq;
    dir->esq = no;
    dir->dirtipo = SBB_VERTICAL;
    no->dirtipo = SBB_VERTICAL;
    *ptr = dir;
}

void ed(struct sbb **ptr){
    struct sbb *no = *ptr;
    struct sbb *esq = no->esq;
    struct sbb *dir = esq->dir;
    esq->dir = dir->esq;
    no->esq = dir->dir;
    dir->esq = esq;
    dir->dir = no;
    esq->dirtipo = SBB_VERTICAL;
    no->esqtipo = SBB_VERTICAL;
    *ptr = dir;
}

void de(struct sbb **ptr){
    struct sbb *no = *ptr;
    struct sbb *dir = no->dir;
    struct sbb *esq = dir->esq;
    no->dir = esq->esq;
    dir->esq = esq->dir;
    esq->esq = no;
    esq->dir = dir;
    dir->esqtipo = SBB_VERTICAL;
    no->dirtipo = SBB_VERTICAL;
    *ptr = esq;
}

void insere(Celula reg, struct sbb **raiz)
{
    int fim = FALSE;
    int inclinacao = SBB_VERTICAL;
    iinsere(reg, raiz, &inclinacao, &fim);
}
void inicializa(struct sbb **raiz)
{
    *raiz = NULL;
}

void iinsere(Celula reg, struct sbb **ptr,int *incli, int *fim){
    /* adiciona, pois encontrou uma folha */
    if(*ptr == NULL){
        iinsere_aqui(reg, ptr, incli, fim);
    /* busca na sub-árvore esquerda */
    }else if(strcmp(reg.data,(*ptr)->reg.data)){
        iinsere(reg,&(*ptr)->esq,&(*ptr)->esqtipo, fim);
            if(*fim) return;
            if((*ptr)->esqtipo == SBB_VERTICAL){
                *fim = TRUE;
            }else if((*ptr)->esq->esqtipo == SBB_HORIZONTAL){
                ee(ptr);
                *incli = SBB_HORIZONTAL;
            }else if((*ptr)->esq->dirtipo == SBB_HORIZONTAL){
                ed(ptr); *incli = SBB_HORIZONTAL;
            }
    /* busca na sub-árvore direita */
    }else if(strcmp((*ptr)->reg.data,reg.data)){
        iinsere(reg, &(*ptr)->dir, &(*ptr)->dirtipo, fim);
            if(*fim) return;
            if((*ptr)->dirtipo == SBB_VERTICAL){
                *fim = TRUE;
            }else if((*ptr)->dir->dirtipo == SBB_HORIZONTAL){
                dd(ptr); *incli = SBB_HORIZONTAL;
            }else if((*ptr)->dir->esqtipo == SBB_HORIZONTAL){
                de(ptr); *incli = SBB_HORIZONTAL;
            }
 /* chave já existe */
    }else{
        printf("erro: chave já está na árvore.\n");
        *fim = TRUE;
    }
}// fim da função

void imprime(FILE *saida,struct sbb *A) {
   if (A!= NULL) {
      imprime(saida,A->esq);

      fprintf(saida,"%s;",A->reg.time1);
      fprintf(saida,"%d;",A->reg.placar1);
      fprintf(saida,"%s;",A->reg.time2);
      fprintf(saida,"%d\n",A->reg.placar2);

      imprime(saida,A->dir);
   }
}


