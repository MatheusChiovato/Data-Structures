#include <stdio.h>
#include <stdlib.h>

int nums[] = {42, 17, 89, 23, 56, 78, 12, 34, 90, 65};
int length= sizeof(nums)/sizeof(nums[0]);

void printArray(int arr[]){         //funcao feita apenas para printar o array quando necessario
    for(int i=0;i<length;i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
}

void sort(int nums[]){

    for(int i=0;i<length;i++){  
        for(int j=i+1;j<length;j++){ //faz um loop dentro de cada posicao do array para comparar se o numero posterior a i é menor
        if(nums[i]>nums[j]){    //faz a troca da posicao dos valores jogando o maior para o final
            int maior=nums[i];
            nums[i]=nums[j];
            nums[j]=maior;
            }
        }
    }
    
    printArray(nums);
}

void reverseSort(int nums[]){

    for(int i=0;i<length;i++){  
        for(int j=i+1;j<length;j++){ //faz um loop dentro de cada posicao do array para comparar se o numero posterior a i é menor
        if(nums[i]<nums[j]){    //faz a troca da posicao dos valores jogando o maior para o começo
            int maior=nums[i];  //foi feito apenas a inversão do sinal na condição do if
            nums[i]=nums[j];
            nums[j]=maior;
            }
        }
    }
    
   printArray(nums);
}



int main(){

    printf("Array desordenado: \n");
    printArray(nums);
    printf("\n");

    printf("Array ordenado do MENOR -> MAIOR: \n");
    sort(nums);
    printf("\n");
    
    printf("Array ordenado do MAIOR -> MENOR: \n");
    reverseSort(nums);

    printf("\n");

    return 0;
}