#include <stdio.h>
#include <stdlib.h>

int arr[10] = {65,3,23,72,98,15,68,31,11,5};
int length = sizeof(arr) / sizeof(arr[0]);

void printArray(int arr[]){
    for(int i=0;i<length;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
}


 void ordenarArray(int arr[]){
    for (int i = 1; i < length; i++){

        int key=arr[i];
        int j=i-1;

        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
            arr[j+1]=key;
        
    }

    printArray(arr);
    printf("\n");

 }

int main(){

    printf("Array DESORDENADO: \n");
    printArray(arr);
    printf("\n");

    printf("Array ORDENADO: \n");
    ordenarArray(arr);



    return 0;
}