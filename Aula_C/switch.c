#include<stdio.h> 

int main(){

    int opcao, presenca;
    float nota_1, nota_2, media;
    printf("--- MENU ---\n");
    printf("1 - MEDIA DO ALUNO\n");
    printf("2 - VERIFICADOR DE PRESENCA\n");
    printf("SELECIONE UMA DAS OPCOES ACIMA: ");
    scanf("%d", &opcao);
    
    switch(opcao){

        case 1: 
        /* código */
        printf("\n--- MEDIA DO ALUNO - CALCULADORA ---\n");
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota_1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota_2);
        if(nota_1, nota_2 >= 0 && nota_1, nota_2 <=10){
            media = (nota_1 + nota_2)/2;
            printf("O aluno esta com a media [(%.2f + %.2f)/2] igual a %.2f.\n", nota_1, nota_2, media);
        }else{
            printf("Notas Invalidas!");
        }

        break;

        case 2: // verificador de presenca
        
        printf("\n--- VERIFICADOR DE PRESENCA ---\n");
        printf("Digite a frequencia do aluno (0-100): ");
        scanf("%d", &presenca);
        if(presenca >=75 && presenca <= 100){
            printf("O aluno nao esta pendente na presenca. Ele esta com %d%%", presenca);
        }else if(presenca >= 0 && presenca <= 74){
            printf("O aluno esta pendente na presenca. Ele esta com %d%%", presenca);
        }else{
            printf("O valor de frequencia invalida!");
        }

        break;

        default: 
        
        printf("Opcao Invalida!");//break;

    }
    return 0;
}

// compilar no terminal: gcc (nome com a extensão, switch_case.c) -o programa
// rodar no terminal:  digitar o do executavel, programa ou programa.exe