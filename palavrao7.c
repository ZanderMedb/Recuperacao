#include <stdio.h>
#include <string.h>

int main() {
    char palavra[21];

    while (scanf("%s", palavra)) {

        if (strlen(palavra)>= 21) {
            printf("A palvra passou do limite de 20 letras");
        }else if (strlen(palavra) >= 10) {
            printf("palavrao\n");
        } else if (strlen(palavra) <= 9) {
            printf("palavrinha\n");
        }
        break;
    }


    return 0;
}