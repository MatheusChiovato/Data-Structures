#include <stdio.h>
#include <stdlib.h>

int MAX_STACK=5;
int stack[5]={10,20,30};
int top= 2;

void printStack(){
    for(int i=0;i<MAX_STACK;i++){
        printf(" %d", stack[i]);
    }
    printf("\n");
}


int push(int n){

    if(top<(MAX_STACK-1)){
        top++;
        stack[top] = n;
        return 1;
    } else{
        return 0;
    }


}

int pop(){

    if(top>=0){
        int val = stack[top];
        top--;
        return val;
    }else{
        return -1;
    }

}





int main(){
    printf("\n");
    if(push(40)){
        printf("Numero adicionado!\n");
    }else{
        printf("Erro ao adicionar o numero, lista cheia!\n");
    }
    printf("\n");

    if(push(50)){
        printf("Numero adicionado!\n");
    }else{
        printf("Erro ao adicionar o numero, lista cheia!\n");
    }
    printf("\n");

    if(push(60)){
        printf("Numero adicionado!\n");
    }else{
        printf("Erro ao adicionar o numero, lista cheia!\n");
    }
    printf("\n");

    printStack();

    printf("\n");
    printf("Item removido: %d\n", pop());
    
    printf("\n");
    printf("Item removido: %d\n", pop());

    printf("\n");

    return 0;
}