#include <stdio.h>

float formula(int OverG, int OverL[], int OverZ[], int OverV[], int OverM[], int OverA[]) {
    float Over = (8 * OverG) + (10 * (OverL[0] + OverL[1])) + (5 * (OverZ[0] + OverZ[1])) + (8 * (OverV[0] + OverV[1])) + (11 * (OverM[0] + OverM[1])) + (12 * (OverA[0] + OverA[1]));
    return Over / 100;
}

int main() {
    char nameTime1[31], nameTime2[31];
    int OverG1, OverG2;
    int OverL1[2] = {0, 0}, OverL2[2] = {0, 0};
    int OverZ1[2] = {0, 0}, OverZ2[2] = {0, 0};
    int OverV1[2] = {0, 0}, OverV2[2] = {0, 0};
    int OverM1[2] = {0, 0}, OverM2[2] = {0, 0};
    int OverA1[2] = {0, 0}, OverA2[2] = {0, 0};

    scanf("%30s", nameTime1);

    for (int i = 0; i < 11; i++) {
        char name[31], posicao;
        int Over;
        scanf("%30s;%c;%d", name, &posicao, &Over);
        switch (posicao) {
            case 'G':
                OverG1 = Over;
                break;
            case 'L':
                OverL1[i % 2] = Over;  
                break;
            case 'Z':
                OverZ1[i % 2] = Over;  
                break;
            case 'V':
                OverV1[i % 2] = Over;  
                break;
            case 'M':
                OverM1[i % 2] = Over;  
                break;
            case 'A':
                OverA1[i % 2] = Over;  
                break;
        }
    }

    scanf("%30s", nameTime2);

    for (int i = 0; i < 11; i++) {
        char name[31], posicao;
        int Over;
        scanf("%30s;%c;%d", name, &posicao, &Over);
        switch (posicao) {
            case 'G':
                OverG2 = Over;
                break;
            case 'L':
                OverL2[i % 2] = Over;  
                break;
            case 'Z':
                OverZ2[i % 2] = Over;  
                break;
            case 'V':
                OverV2[i % 2] = Over;  
                break;
            case 'M':
                OverM2[i % 2] = Over;  
                break;
            case 'A':
                OverA2[i % 2] = Over;  
                break;
        }
    }

    float OverhalTime1 = formula(OverG1, OverL1, OverZ1, OverV1, OverM1, OverA1);
    float OverhalTime2 = formula(OverG2, OverL2, OverZ2, OverV2, OverM2, OverA2);

    printf("%s: %.2f\n", nameTime1, OverhalTime1);
    printf("%s: %.2f\n", nameTime2, OverhalTime2);

    // Determina qual time é o mais forte
    if (OverhalTime1 > OverhalTime2) {
        printf("%s tem um time mais forte\n", nameTime1);
    } else if (OverhalTime2 > OverhalTime1) {
        printf("%s tem um time mais forte\n", nameTime2);
    } else {
        printf("Os times sao igualmente fortes no papel\n");
    }

    return 0;
}