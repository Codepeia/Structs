#include <stdio.h>
#include <string.h>
#define MAX 3
//declaracao do registro
typedef struct{
    char nome[20];
    int idade;
}Pessoa;

void cadastrar(Pessoa p[], int indice){
    printf("Digite o nome: ");
    fflush(stdin);
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &p[indice].idade);
    fflush(stdin);
}

void imprimir(Pessoa p[], int indice){
    for(int i = 0; i < indice; i++){
        printf("Nome: %s", p[i].nome);
        printf("Idade: %d", p[i].idade);
        printf("\n");
    }
}

main(){
    Pessoa listaPessoas[MAX];
    int totalCadastrados = 0, opcao;
    do{
        printf("\nDigite 1 - Cadastrar");
        printf("\nDigite 2 - Imprimir");
        printf("\nDigite 3 - Buscar");
        printf("\nDigite 0 - Sair");
        printf("\nDigite a opcao escolhida\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                //chamar funcao cadastrar
                if(totalCadastrados < MAX){
                    cadastrar(listaPessoas, totalCadastrados);
                    totalCadastrados++;
                    printf("\nCadastrado com sucesso");
                }else{
                    printf("\nCapacidade maxima de cadastros atingida");
                    opcao = 0;
                }
                break;
            case 2:
                //chama a funcao imprimir
                imprimir(listaPessoas, totalCadastrados);
                break;
            case 3:
                //chama a funcao buscar
                //inserir o campo para buscar
                imprimir(listaPessoas, totalCadastrados);
                break;
        }
    }while(opcao != 0);

}

