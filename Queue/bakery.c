#include <stdio.h>

struct Food{    //"Classe" de Comidas
    char name[30];
    float price;
}hamburgao, pizza,quibe;

struct Drink{   //"Classe" de Bebidas
    char name[30];
    float price;
}refrigerante, suco, agua;

typedef struct{
    char client[30];
    struct Food comida;
    struct Drink bebida;
}Order;

Order orderQueue[10];     // lista para armazenar os pedidos feitos a medida que forem sendo adicionados
int maxRequest=10;      
int orderPos=0;


void makeOrderAuto(struct Food pFood, struct Drink pDrink){
    orderQueue[orderPos].comida = pFood;
    orderQueue[orderPos].bebida = pDrink;
    orderPos++;
}

void printOrders(){
    for(int i=0;i<orderPos;i++){
            printf("Pedido n %d: %s acompanhado de %s\n",i+1, orderQueue[i].comida.name,orderQueue[i].bebida.name);
    }
}

void showFoodMenu(){   //printa no terminal as comidas 
    printf("======================\n");
    printf("\n");
    printf("Comidas:\n");
    printf("1 - %s \n   R$%.2f\n", hamburgao.name,hamburgao.price);
    printf("2 - %s \n   R$%.2f\n", pizza.name,pizza.price);
    printf("3 - %s \n   R$%.2f\n", quibe.name,quibe.price);
    printf("4 - Nada\n");
    printf("\n");
}
void showDrinkMenu(){
    printf("======================\n");    //printa no terminal as bebidas
    printf("\n");
    printf("Bebidas:\n");
    printf("1 - %s \n   R$%.2f\n", refrigerante.name,refrigerante.price);
    printf("2 - %s \n   R$%.2f\n", suco.name,suco.price);
    printf("3 - %s \n   R$%.2f\n", agua.name,agua.price);
    printf("4 - Nada\n");
}


void makeFoodOrderTerminal(){
    

    if(orderPos<maxRequest){

        int choice;
        char nome[30];
        printf("Informe seu nome:\n");
        scanf("%s", nome);
        strcpy(orderQueue[orderPos].client, nome);
        printf("\n");
        showFoodMenu();
        printf("======================\n");
        printf("\n");
        printf("Escolha uma comida ai! \n");
        scanf("%d", &choice);
            switch (choice){
            
            case 1:
                    orderQueue[orderPos].comida = hamburgao;
                    break;
            case 2:
                    orderQueue[orderPos].comida = pizza;
                    break;
            case 3:
                    orderQueue[orderPos].comida = quibe;
                    break;
            default:
                printf("Não temos este tipo de comida!\n");
                break;
            }
            printf("\n");
            printf("Comida adicionada: %s\n", orderQueue[orderPos].comida.name);

    }else{
        printf("Limite de pedidos excedido, por favor aguarde!");
    }

    makeDrinkOrderTerminal();

    orderPos++;
}



void makeDrinkOrderTerminal(){     
        int choice;
        printf("\n");
        showDrinkMenu();
        printf("======================\n");
        printf("Escolha uma bebida agora! \n");
        scanf("%d", &choice);
            switch (choice){
            
                case 1:
                    orderQueue[orderPos].bebida = refrigerante;
                    break;
                case 2:
                    orderQueue[orderPos].bebida = suco;
                    break;
                case 3:
                    orderQueue[orderPos].bebida = agua;
                    break;
                default:
                    printf("Não temos este tipo de comida!\n");
                    break;
                }
                printf("\n");
                printf("Bebida adicionada: %s\n", orderQueue[orderPos].bebida.name);
                printf("\n");
}








int main(){

    strcpy(hamburgao.name, "Hamburgao");    //inicializando as Comidas
    hamburgao.price=8.00;
    strcpy(pizza.name, "Pizza");
    pizza.price=6.00;
    strcpy(quibe.name, "Quibe");
    quibe.price=5.00;

    strcpy(refrigerante.name, "Refrigerante");  //inicializando as Bebidas
    refrigerante.price=4.50;
    strcpy(suco.name, "Suco");
    suco.price=4.00;
    strcpy(agua.name, "Agua");
    agua.price=2.25;

    printf("\n");
    makeOrderAuto(pizza, refrigerante);
    makeOrderAuto(quibe, suco);
    makeOrderAuto(hamburgao, refrigerante);
    makeOrderAuto(quibe, agua);
    makeOrderAuto(pizza, suco);
    makeOrderAuto(hamburgao, agua);

    printOrders();

    


    return 0;
}
