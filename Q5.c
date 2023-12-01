#include <stdio.h>

struct Professor {
    int idade;
    char graduacao[20];
};

struct Estudante {
    int idade;
    float IRA;
    struct Professor *professor;
};

int main() {

    struct Professor Daniel = {36, "doutorado"};
    struct Estudante Ronielle = {20,8.40, &Daniel}; 

    printf("Dados do Estudante:\n");
    printf("Idade: %d\n", Ronielle.idade);
    printf("IRA: %.2f\n", Ronielle.IRA);
    
    if (Ronielle.professor != NULL) {
        printf("\nDados do Professor Associado:\n");
        printf("Idade: %d\n", Ronielle.professor->idade);
        printf("Graduacao: %s\n", Ronielle.professor->graduacao);
    } else {
        printf("\nEstudante sem professor associado.\n");
        exit(1);
    }

    return 0;
}
