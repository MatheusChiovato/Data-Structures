#include <stdio.h>
#include <stdlib.h>

int list[10]={4,7,12,5,9,47,60,34,1,8};
int listlength= sizeof(list)/sizeof(list[0]);

int search(int key){

    if(listlength>0){
        for(int i=0; i<listlength;i++){
            if(list[i]==key){
                printf("Valor %d na posicao %d\n",key,i);
                return i;
            }
        }
    }
    return -1;
}

int insert(int n){
    
    if (listlength >= 10) { 
        printf("Erro: Lista cheia!\n");
        return -1;
    }


    if (search(n) == -1){
        list[listlength] = n;
        listlength++;
        printf("Valor %d adicionado\n", n);

        for (int i = 0; i < listlength; i++){
            printf(" %d", list[i]);
        }
        return 1;
    } else{
        printf("Ja existente\n");
        return -1;
    }
}

void excluir(int n){

    int pos=search(n);

    if(pos != -1){
        for (int i = pos; i < listlength; i++){ //faz a varredura de todos os items da lista a partir do valor n informado
            list[i]=list[i+1]; //joga todos os valores um índice para tras
        }
        list[listlength-1]=n; //define o valor do ultimo indice sendo o valor informado que deseja-se excluir
         listlength--; //diminui em 1 o tamanho da lista excluindo o ultimo indice;

        printf("Item removido\n");
        for (int i = 0; i < listlength; i++){ 
            printf(" %d", list[i]);
        }
    } else{
        printf("Este item não existe\n");
    }


}





int main(){
    /*
    search(12);
    insert(13);
    */

    excluir(47);


    return 0;
}
