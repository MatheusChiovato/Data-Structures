#include <stdio.h>
#include <stdlib.h>

int arr[8]={34, 87, 12, 56, 91, 3, 78, 25};
int length= sizeof(arr)/sizeof(arr[0]);

void printArray(int arr[]){
    
    for(int i=0;i<length;i++){

        printf(" %d",arr[i]);

    }

}




void bubbleSort(int arr[]){

    int rodada = 0;

    printf("\n");
    printf("Array desordenado -> ");
    printArray(arr);
    printf("\n");


    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){

            if(arr[i]>arr[j]){
                int key = arr[j];
                arr[j]=arr[i];
                arr[i]=key;
                rodada++;
                printf("Rodada %d - ", rodada);
                printArray(arr);
                printf("\n");
                printf("Trocou %d com %d\n", arr[i],arr[j]);
                printf("\n");
            }
        }
    }
}


void reversedBubbleSort(int arr[]){

    int rodada = 0;

    printf("\n");
    printf("Array desordenado -> ");
    printArray(arr);
    printf("\n");


    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){

            if(arr[i]<arr[j]){
                int key = arr[j];
                arr[j]=arr[i];
                arr[i]=key;
                rodada++;
                printf("Rodada %d - ", rodada);
                printArray(arr);
                printf("\n");
                printf("Trocou %d com %d\n", arr[i],arr[j]);
                printf("\n");
            }
        }
    }
}

void insertionSort(int arr[]){

    int rodada=0;

    printf("\n");
    printf("Array desordenado -> ");
    printArray(arr);
    printf("\n");
    printf("\n");

    for(int i=1;i<length;i++){
        int j=i-1;
        int key=arr[i];
        while(arr[j]>0 && arr[j]>key){
            arr[j+1]=arr[j];
            arr[j]=key;

            rodada++;
            printf("Rodada %d - ", rodada);
            printArray(arr);
            printf("\n");
            printf("N %d e %d foram trocados\n", arr[i],arr[j]);
            printf("\n");

            j--;
        }
    }
}

void reversedInsertionSort(int arr[]){

    int rodada=0;

    printf("\n");
    printf("Array desordenado -> ");
    printArray(arr);
    printf("\n");
    printf("\n");

    for(int i=1;i<length;i++){
        int j=i-1;
        int key=arr[i];
        while(arr[j]>0 && arr[j]<key){
            arr[j+1]=arr[j];
            arr[j]=key;

            rodada++;
            printf("Rodada %d - ", rodada);
            printArray(arr);
            printf("\n");
            printf("N %d e %d foram trocados\n", arr[i],arr[j]);
            printf("\n");

            j--;
        }
    }
}

int main(){

    printf("metade: %d  ult.Value: %d \n",length/2,arr[8]);

    return 0;
}