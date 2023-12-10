#include <stdio.h>

int main() {
    int caso , N;

    scanf("%d", &caso);

    while (caso--) {
        scanf("%d", &N);

        int  s = (N % 2 == 0) ? 0 : 1;

        printf("%d\n", s);
    }

    return 0;
}