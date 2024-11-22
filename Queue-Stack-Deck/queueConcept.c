#include <stdio.h>
#include <stdlib.h>

int list[10]={4,7,12,5,8,47,60,34,1,8};
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



int main(){

    search(12);
    insert(13);



    return 0;
}
