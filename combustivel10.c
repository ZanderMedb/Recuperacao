#include <stdio.h>

int main() {
    int T, V;
    double L;

    scanf("%d", &T);
    scanf("%d", &V);

    L = ((T * V) / 12.0);

    printf("%.3lf\n", L);

    return 0;
}