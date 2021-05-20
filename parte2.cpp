#include <stdio.h>

int main  ( ){
    int numero1, numero2, numero3;

    printf("Ingrese primero numero:\n");
    scanf("%d",&numero1);
    printf("Ingrese segundo numero:\n");
    scanf("%d",&numero2);
    printf("Ingrese tercer numero:\n");
    scanf("%d",&numero3);
    if(numero2<numero1>numero3){
        printf("El numero1 es mayor!\n");
        }else{ (numero1<numero2>numero3);
            printf("El numero2 es mayor!\n");
             }else{ (numero1<numero3>numero2);
            printf("El numero3 es mayor!\n");
            }else{ (numero1=numero3=numero2);
            printf("son iguales!\n");
            

    }
    return 0;

}
