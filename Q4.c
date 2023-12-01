#include <stdio.h>

    struct Aluno {
        float N1;
        float N2;
        float media;
    };
    float calcMedia(struct Aluno aluno);

int main(){

    struct Aluno aluno[3];

    for (int i = 0; i < 3; i++){

        printf("Digite a nota 1: ");
        scanf("%f",&aluno[i].N1);
        printf("Digite a nota 2: ");
        scanf("%f",&aluno[i].N2);

        aluno[i].media = calcMedia(aluno[i]);
    }

    for (int i = 0; i < 3; i++) {

        printf("Media do aluno %d: %.2f\n",i + 1,aluno[i].media);

    }
    return 0;
}

float calcMedia(struct Aluno aluno){

    return ((aluno.N1 + aluno.N2)/2);
}