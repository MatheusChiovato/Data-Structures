#include <stdio.h>
#include <stdlib.h>

int stack[3]={10,20,30};
int length=sizeof(stack)/sizeof(stack[0]); //aponta o valor 3 indicando o tamanho
int topo=(sizeof(stack)/sizeof(stack[0])-1); //aponta o valor 2 indicando a ultima posição

void printArray(int arr[]){
    for(int i=0;i<length;i++){
        printf(" %d", arr[i]);
    }
        printf("\n");
}


int pushStack(int n){

    if(stack[topo] == NULL){    //verifica se a última posição da pilha esta vazia
 
        stack[topo]=n; //adiciona o numero desejado

        printArray(stack);
    } else{
        printf("Pilha cheia!");
    }
    
}



int main(){

    printf("\n");
    pushStack(40);
    printf("\n");
    


    return 0;
}