#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// Programa com Método void e um menu de opções em switch case 
 
void facaDoacao(){  // Método void sem retorno
    printf("\n----------------------------");
    printf("\nBem vindo!! - Ajude um amigo");
    printf("\n----------------------------");
    printf("\n[1] para doar R$10,00");
    printf("\n[2] para doar R$25,00");
    printf("\n[3] para doar R$50,00");
    printf("\n[4] para doar outros valores");
    printf("\n[5] para cancelar");
    printf("\n----------------------------");
}
int main(){
    int op;
    float valor, soma;
    char nome[30], r = 's';
    facaDoacao();
    printf("\nDigite seu nome: ");
    gets(nome);
    while(r == 's') {
        printf("Escolha uma opcao: ");
        scanf("%d%c", &op);
        switch(op){ 
            case 1:
                valor = 10;
                break;
            case 2:
                valor = 25;
                break;
            case 3:
                valor = 50;
                break;
            case 4:
                 printf("\nQual o valor da doacao? R$");
                 scanf("%f%c", &valor);
                 break;
            case 5:
                  valor = 0;
                  break;
            default:
                  printf("\nOpcao incorreta!, Por favor escolha novamente");
                  break; 
        }
        printf("\nDeseja continuar? (s/n) ");
        scanf("%c", &r);
        
        if(op == 5){ 
           soma = 0;
           printf("\nDoacao cancelada");
       }else 
            soma = soma + valor;// Soma total dos valores
            
        }
         system("cls");
        if(op == 5){
           printf("\nDoacao cancelada");  
        } 
        printf("\n%s sua doacao foi de: R$ %3.2f", nome, soma);
        printf("\nMuito obrigado por ajudar!!");
    
   getch();  
}
