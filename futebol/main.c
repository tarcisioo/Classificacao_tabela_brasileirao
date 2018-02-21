                    /// Tarcísio de Oliveira Rocha

#include "futebol.h"
#include "hash_SBB.h"

int main()
{
            FILE *entrada,*saida;//cria ponteiros para arquivos
            entrada =  fopen("entrada.txt","r");// abre o arquivo para leitura
            saida = fopen("saida.txt","w");// abre op arquivo para escrita
            char lixo;// caractere ";"
            int i,j,l;
///PASSO 1 (LEITURA DE DADOS)
    /// 1.1 (tabela HASH e forma de ordenação)
            int tamanho_da_tabela_hash;// variavel para armazenar o tamanho da tabela hash
            int escolha_ordenacao;// variavel para armazenar a escolha do algoritmo de ordenação Quicksort ou Shellsort
            fscanf(entrada,"%d%c%d",&tamanho_da_tabela_hash,&lixo,&escolha_ordenacao);// coleta os dados
                    Tabela_hash TAB[tamanho_da_tabela_hash];/// inicializa tabela hash
                    //inicializa arvores
                    for(i=0;i<tamanho_da_tabela_hash;i++)
                    inicializa(&TAB[i].A);
    /// 1.2 (times, rodadas e n_jogos)
            int numero_de_times;// variavel para armazenar o numero de times pertencentes ao campeonato
            int numero_de_rodadas;//variavel para armazenar o numero de rodadas do campeonato
            int quantidade_de_jogos;//variavel para armazenar a quantidade de jogos
            fscanf(entrada,"%d%c%d%c%d",&numero_de_times,&lixo,&numero_de_rodadas,&lixo,&quantidade_de_jogos);//coleta os dados
    /// 1.3 (nome dos times)
            Time SKT[numero_de_times];// variavel declarada para armazenar o nome de cada time que compoe o campeonato
            for(i=0;i<numero_de_times;i++){
                fscanf(entrada,"%s",SKT[i].nome_do_time);// grava o nome dos times,,, deve ler nome composto, mudar isso!
                SKT[i].gols_marcados = 0;
                SKT[i].pontos= 0 ;
                SKT[i].saldo_de_gols = 0;
                SKT[i].vitorias = 0;
            }// fim do for
    /// 1.4 (rodadas do campeonato) solução
            char nome_rodada[NTIME],nome_time1[NTIME],nome_time2[NTIME];
            int nrodada,placar1,placar2;
            char barra;
            Celula O_o;// variavel do tipo celula
            char data[NTIME];
            for(i=0;i<numero_de_rodadas;i++){
                fscanf(entrada,"%s%d",nome_rodada,&nrodada);// grava: RODADA 1, RODADA 2 .....
                fprintf(saida,"%d\n",nrodada);
                for(j=0;j<quantidade_de_jogos;j++){
                    fscanf(entrada,"%[^;]%c%[^;]%c%d%c%[^;]%c%d",data,&lixo,nome_time1,&lixo,&placar1,&lixo,nome_time2,&lixo,&placar2);
                   /// aqui entra a ParteII
                   int t;
                   //cria celula
                   O_o.placar1 = placar1;
                   O_o.placar2 = placar2;
                   strcpy(O_o.time1,nome_time1);// copia nome 2 para nome 1
                   strcpy(O_o.time2,nome_time2);
                   strcpy(O_o.data,data);
                   t = posicao_hash(O_o,tamanho_da_tabela_hash);// posição
                   // insere arvore
                    insere(O_o,&TAB[t].A);/// INSERE NA ARVORE
                    resultado_do_jogo(&SKT[procura_time(SKT,nome_time1,numero_de_times)],&SKT[procura_time(SKT,nome_time2,numero_de_times)],placar1,placar2);
                }/// fim do for interno
                ordena(escolha_ordenacao,SKT,numero_de_times);// ordena segundo o algoritmo escolhido
                for(l=(numero_de_times-1);l>=0;l--){
                    solucao(saida,SKT[l]);
                }
            }/// fim do for externo

///PASSO 2 (imprime tabela Hash->Arvore SBB)
        int t;
        while(!feof(entrada)){

            fscanf(entrada,"%s",data);
            strcpy(O_o.data,data);
            t = posicao_hash(O_o,tamanho_da_tabela_hash);
            fprintf(saida,"%s;",data);
            imprime(saida,TAB[t].A);

        }// fim do while

        fclose(saida);
        fclose(entrada);

    return 0;
}
