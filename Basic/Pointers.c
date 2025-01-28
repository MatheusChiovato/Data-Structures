#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr_a,int *ptr_b){

    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

}



void createArray(int tam){

    int *arr = malloc(tam * sizeof(int));

    if(arr){

        for(int i=0;i<tam;i++){
            arr[i]=i+1;
            printf(" %d",arr[i]);
        }
    }else{
        printf("Erro ao alocar a memoria\n");
    }
}






int main(){

    int x=10;
    int *ptr_x=&x;

    int *a;

    a = malloc(sizeof(int));

    int *arr;




    if(a){
        printf("Memoria alocada com sucesso!\n");
        printf("%d\n", a);
        a=5;
        printf("%d\n", a);
    }else{
        printf("Erro ao alocar memória");
    }



   createArray(15);



    

    return 0;
}