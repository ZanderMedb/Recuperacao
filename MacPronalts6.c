#include <stdio.h>

int main() {
    int q_produto, c_produto, q_desejada;
    double total = 0;

    scanf("%d", &q_produto);

    for (int i = 0; i < q_produto; i++) {
        scanf("%d %d", &c_produto, &q_desejada);

        
        switch (c_produto) {
            case 1001:
                total += (1.50 * q_desejada);
                break;
            case 1002:
                total += (2.50 * q_desejada);
                break;
            case 1003:
                total += (3.50 * q_desejada);
                break;
            case 1004:
                total += (4.50 * q_desejada);
                break;
            case 1005:
                total += (5.50 * q_desejada);
                break;
            default:
                printf("Código de produto inválido.\n");
                return 1; 
        }
    }

    printf("%.2lf\n", total);

    return 0;
}