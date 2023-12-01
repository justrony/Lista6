#include <stdio.h>

    struct Aluno
    {
        float N1;
        float N2;
        float media;
    };
    

int main(){

    struct Aluno aluno;

    printf("Digite a nota 1: ");
    scanf("%f",&aluno.N1);

    printf("Digite a nota 2: ");
    scanf("%f",&aluno.N2);

    aluno.media = (aluno.N1 + aluno.N2)/2;
    printf("Media do aluno e: %.2f",aluno.media);

    return 0;
}