                    /// Tarcísio de Oliveira Rocha

#define TRUE 1
#define FALSE 0
#define SBB_VERTICAL 0
#define SBB_HORIZONTAL 1
#define hash(v, M) (v % M) // Transforma uma chave v em um índice no intervalo 0..M-1.

// cada celula tera os componentes abaixo
typedef struct Celula{
     char time1[NTIME];
     char time2[NTIME];
     char data[NTIME];
     int placar1;
     int placar2;
}Celula;

struct sbb{
    Celula reg;
    struct sbb *esq;
    struct sbb *dir;
    int esqtipo;
    int dirtipo;
};

typedef struct Tabela_hash{
    struct sbb *A;
}Tabela_hash;


