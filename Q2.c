#include <stdio.h>


struct Estoque {
    char nomePeca[30];
    int numeroPeca;
    float preco;
    int numeroPedido;
};

int main() {

    struct Estoque item;

    printf("Digite o nome da peca: ");
    scanf("%s", item.nomePeca);

    printf("Digite o numero da peca: ");
    scanf("%d", &item.numeroPeca);

    printf("Digite o preco da peca: ");
    scanf("%f", &item.preco);

    printf("Digite o numero do pedido: ");
    scanf("%d", &item.numeroPedido);

    printf("=======================\n");
    printf("Nome da peca: %s\n", item.nomePeca);
    printf("Numero da peca: %d\n", item.numeroPeca);
    printf("Preco da peca: R$%.2f\n", item.preco);
    printf("Numero do pedido: %d\n", item.numeroPedido);
    printf("=======================\n");

    return 0;
}
