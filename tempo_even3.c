#include <stdio.h>
#include <stdlib.h>

int main() {
    char diaI[4], diaF[4];
    int diaInicio, horaI, minI, segI, horaF, minF,segF;

    scanf("%s %d", diaI, &diaInicio);
    scanf("%d : %d : %d", &horaI, &minI, &segI);

    scanf("%s %d", diaF, &diaInicio);
    scanf("%d : %d : %d", &horaF, &minF, &segF);


    int TotalSegI = segI + 60 * (minI + 60 * horaI);
    int TotalSegF =segF + 60 * (minF + 60 * horaF);
    int difSeg = TotalSegF - TotalSegI;

    int dia = difSeg / (24 * 60 * 60);
    int Hr = (difSeg % (24 * 60 * 60)) / 3600;
    int min = ((difSeg % (24 * 60 * 60)) % 3600) / 60;
    int seg = ((difSeg % (24 * 60 * 60)) % 3600) % 60;

   
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, Hr, min, seg);

    return 0;
}


