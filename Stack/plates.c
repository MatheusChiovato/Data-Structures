#include <stdio.h>

typedef struct {
    int dirty; // 1 = True | 0 = False
}Plate;

int cleanStack = 10; //Define o tamanho das pilhas de pratos limpos e sujos 
int dirtyStack = 0;

Plate cleanPlates[10];  //Criação dos arrays de estado dos pratos
Plate dirtyPlates[10]; 

int top_CleanPlate = 9; //Define o topo da pilha de pratos limpos e sujos
int top_DirtyPlate = 0;


void messPlate(Plate p){
    if(cleanStack > 0 && p.dirty == 0){
        dirtyPlates[top_DirtyPlate]=cleanPlates[top_CleanPlate];
        cleanPlates[top_CleanPlate];
        cleanStack=top_CleanPlate;
        top_CleanPlate--;
        dirtyStack++;
        printf("Mais 1 prato sujo!");
    } else{
        printf("A pilha de pratos limpos está vazia!");
    }
} 

void cleanPlate(Plate p){

    if(dirtyStack > 0 && p.dirty != 0){
        top_CleanPlate++;
        cleanStack++;
        cleanPlates[top_CleanPlate]=dirtyPlates[top_DirtyPlate];
        top_DirtyPlate--;
        dirtyStack--;
        printf("Prato limpo!");
    } else{
        printf("A pilha de pratos sujos está vazia!");        
    }

}





int main(){

    for(int i=0;i<10;i++){     //inicializa o array de Clean Plates
        cleanPlates[i].dirty=0;
    }
    for(int i=0;i<10;i++){      //inicializa o array de Dirty Plates
        dirtyPlates[i].dirty=0;
    }

    printf("Pratos Limpos: %d\n", cleanStack);
    printf("Pratos Sujos: %d\n", dirtyStack);

    printf("\n");

    messPlate(cleanPlates[10]);

    printf("\n");

    printf("Pratos Limpos: %d\n", cleanStack);
    printf("Pratos Sujos: %d\n", dirtyStack);

    printf("\n");


    return 0;
}