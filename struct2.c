#include <stdio.h>
#include <string.h>
//declaracao do registro
typedef struct{
    char nome[20];
    char matricula[20];
    int idade;
}Aluno;

main(){
    Aluno a[3];
    for(int i = 0; i < 3; i++){
        printf("Digite o nome: ");
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        printf("Digite a matricula: ");
        fgets(a[i].matricula, sizeof(a[i].matricula), stdin);
        printf("Digite a idade: ");
        scanf("%d", &a[i].idade);
        fflush(stdin);
        printf("\n");
    }
    for(int i = 0; i < 3; i++){
        printf("Nome: %s", a[i].nome);
        printf("Matricula: %s", a[i].matricula);
        printf("Idade: %d", a[i].idade);
        printf("\n");
    }
}