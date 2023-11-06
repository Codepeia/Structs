#include <stdio.h>
#include <string.h>
//declaracao do registro
struct pessoa{
    char nome[20];
    int idade;
    float salario;
};

typedef struct{
    char rua[20];
    char cep[12];
    int numero;
}Endereco;

main(){
    //declarar uma variavel do tipo registro
    struct pessoa p;
    Endereco end;

    //atribuicao dos valores ao registro
    p.idade = 10;
    strcpy(p.nome, "Maria");
    p.salario = 1000.0;

    printf("Nome: %s", p.nome);
    printf("\nIdade: %d", p.idade);
    printf("\nSalario: %.2f", p.salario);

    printf("\nDigite a rua ");
    scanf("%[^\n]", end.rua);
    fflush(stdin);
    printf("\nDigite o cep ");
    fgets(end.cep, sizeof(end.cep), stdin);
    fflush(stdin);
    printf("\nDigite o numero ");
    scanf("%d", &end.numero);

    printf("Rua: %s", end.rua);
    printf("CEP: %s", end.cep);
    printf("Numero: %d", end.numero);

}