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

    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){

            if(arr[i]>arr[j]){
                int key = arr[j];
                arr[j]=arr[i];
                arr[i]=key;
                
            }
        }
    }
}




int binarySearch(int n){


    int low = 0;
    int high = length-1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==n){
            return mid;
        } else if(arr[mid]<n){
            low = mid+1;
        } else{
            high=mid-1;
        }
    }
    return -1;
}


void LinearSearch(int n){

    int dif=0;

    for(int i=0;i<length;i++){
        if(arr[i]==n){
            printf("Num %d encontrado na posicao %d\n",n,i);
        }else{
            dif++;
        } 
        if(dif==length){
            printf("Numero nao encontrado na lista\n");
        }
    }


}



int main(){

    printf("\n");
    bubbleSort(arr);
    printArray(arr);
    printf("\n");

    printf("Numero encontrado em: %d\n",binarySearch(12));
    

    return 0;
}