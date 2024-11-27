#include <stdio.h>
#include <stdlib.h>

int nums[] = {45, 23, 89, 12, 67, 38, 90, 56, 77, 34, 11, 99, 62, 41, 18, 74, 53, 87, 29, 66};
int length= sizeof(nums)/sizeof(nums[0]);

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
    
    for(int i=0;i<length;i++){
        printf(" %d",nums[i]);
    }
}

void reverseSort(int nums[]){

    for (int i = 0; i < length; i++) { 
        for (int j = i + 1; j < length; j++) { 
            if (nums[i] < nums[j]) { 
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    
    for(int i=0;i<length;i++){
        printf(" %d",nums[i]);
    }
}



int main(){

    sort(nums);
    printf("\n");

    return 0;
}