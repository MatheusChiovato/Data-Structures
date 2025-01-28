#include <stdio.h>

void calcMedia(int num[], int tamanho){      //calculador de média aritmética

    float result = 0;
    int numSomado=0;

    for(int i=0;i<tamanho;i++){

        printf("%d + %d =",numSomado,num[i]);
        numSomado=numSomado + num[i];
        printf(" %d\n",numSomado);
    }

    printf("\n");

    result=numSomado/tamanho;

    printf(" %d\n",numSomado);
    printf("-----  =  %.2f\n", result);
    printf(" %d\n", tamanho);

    
}

void numPar(int num[]){     //verificador de numero par

    for(int i=0;i<15;i++){

        if(num[i]%2 > 0){
            printf("O numero %d e impar\n", num[i]);
        }else{
            printf("O numero %d e par\n", num[i]);
        }

    }
    
}



int verificador(int n){     //verificador para a função de numero primo

    int numeros[8]={2,3,4,5,6,7,8,9};
    int verificado = 0;
    int i=0;

    for(i=0;i<8;i++){

        if(n % numeros[i] == 0 && n!= numeros[i]){ 
            verificado++;            
        }
    }

    if(verificado != 0){
        return 0;
    } else{
        return 1;
    }

}


void numPrimo(int num){     //função verificar numero primo

    if(verificador(num)){
        printf("%d e primo\n", num);
    }else{
        printf("%d nao e primo\n", num);
    }

}



void calcFatorial(int num){     //função para calculo de fatorial

    int res=num;

    for(int i=0;i<num;i++){

        int newNum = num-1;
        res= res * newNum;
        num--;
    }

    printf("%d\n", res);

}


void calcFibonacci(int quant){      //Calcula a sequência de Fibonacci

    int n = 1;
    int previous;
    int key;
    int count = 0;

    while(count != quant){
       
       if(n-1 == 0){

            previous=n;
            n = n + 1; 

            printf("| 1 | 1 ");

            printf("| %d |",n);
            count++;
            

        }else{
       
            key=n;
            n=n+previous;
            printf(" %d |",n);
            count++;
            previous=key;
        }
    }
 

}




int main(){

  //  int numeros[15]={42, 17, 89, 3, 70, 55, 28, 91, 62, 13, 8, 45, 97, 21, 5};
   // int array2[8]={34, 87, 12, 56, 91, 3, 78, 25};


    printf("\n");

    calcFibonacci(15);

    /*
    for(int i=0;i<15;i++){
        numPrimo(numeros[i]);
    }
        */
    



    return 0;
}