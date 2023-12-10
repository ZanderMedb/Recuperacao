int main() {
    int code, quant;
    float preco, saldo;

    scanf("%d %d", &code, &quant);

    switch (code) {
        case 1://Cachorro Quente
            preco = 4.00;
            break;
        case 2://X-Salada
            preco = 4.50;
            break;
        case 3://X-Bacon
            preco = 5.00;
            break;
        case 4://Torrada simples
            preco = 2.00;
            break;
        case 5://Refrigerante
            preco = 1.50;
            break;
        default:

            printf("Codigo de item invalido\n");
            return 1;
    }

    saldo = preco * quant;

    printf("Total: R$ %.2f\n", saldo);

    return 0;
}