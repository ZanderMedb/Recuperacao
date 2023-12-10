#include <stdio.h>

int main(){

    int grenal = 0; 
    int inter = 0;
    int gremio = 0;
    int empate = 0;
    int continuar = 1;
    int gols_inter, gols_gremio;
    
    while (continuar == 1) {

        scanf("%d %d", &gols_inter , &gols_gremio);
        grenal++;

        if (gols_inter > gols_gremio) {
            inter++;
        }
        else if (gols_gremio > gols_inter) {
            gremio++;
        }
        else {
            empate++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &continuar);

        if (continuar != 1 && continuar != 2) {
            printf("Opçao invalida.\n");
            break;
        }

    }

    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);

    if (inter > gremio) {
        printf("Inter venceu mais\n");
    }
    else if (gremio > inter) {
        printf("Gremio venceu mais\n");
    }
    else {
        printf("Empate\n");
    }

    return 0;
}