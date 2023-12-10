///////////////////////////////////////////////////Editar
#include <stdio.h>

int main() {
    int N, i;
    long long int T;

    // Leitura do número de casos
    scanf("%d", &N);

    // Processamento para cada caso
    for (i = 0; i < N; i++) {
        // Leitura do tempo transcorrido
        scanf("%lld", &T);

        // Cálculo do ano correspondente
        if (T < 2015) {
            printf("%lld D.C.\n", 2015 - T);
        } else {
            printf("%lld A.C.\n", T - 2014);
        }
    }

    return 0;
}