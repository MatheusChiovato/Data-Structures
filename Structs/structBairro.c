#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct rua{
    char nome[40];
    int cep;
} rua;

typedef struct bairro{
    char nome[40];
    rua ruas[3];
} bairro;


int main(){

    bairro santaHelena;
    bairro paineiras;
    
    strcpy(santaHelena.nome, "Lagoas Novas");

    for (int i = 0; i < 3; i++){
        strcpy(santaHelena.ruas[i].nome, "Nao Cadastrada"); // Nome padrão
        santaHelena.ruas[i].cep = 0;                        // CEP padrão
    }

    strcpy(santaHelena.ruas[0].nome, "Rua das Araras");     // inserindo primeiros dados do array
    santaHelena.ruas[0].cep = 37824556;

    strcpy(santaHelena.ruas[1].nome, "Rua das Corujas");
    santaHelena.ruas[1].cep = 773945929; 

    strcpy(santaHelena.ruas[2].nome, "Rua dos Bentivis");
    santaHelena.ruas[2].cep = 835956777;                        

    printf("=============== %s ", santaHelena.nome);    
    printf( "===============\n");
    for(int i=0;i<3;i++){
        printf("Rua: %s, CEP: %d\n", santaHelena.ruas[i].nome, santaHelena.ruas[i].cep);    //loop para exibir na tela os dados informados de rua e cep deste bairro
    }
    printf("============================================\n");
    printf("\n");
    strcpy(paineiras.nome, "Paineiras");

    for(int i=0;i<3;i++){
        strcpy(paineiras.ruas[i].nome, "Nao Definido");
        paineiras.ruas[i].cep = 0;
    }

    strcpy(paineiras.ruas[0].nome, "Rua das Palmeiras");
    paineiras.ruas[0].cep = 294857422;

    strcpy(paineiras.ruas[1].nome, "Rua dos Eucaliptos");
    paineiras.ruas[1].cep = 293857398;


    printf("================ %s ", paineiras.nome);    
    printf( "=================\n");
    for(int i=0;i<3;i++){
        printf("Rua: %s, CEP: %d\n", paineiras.ruas[i].nome, paineiras.ruas[i].cep);
    }

    printf("============================================\n");
    printf("\n");

    return 0;
}