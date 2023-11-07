#include <stdio.h>

int main() {
    int conjunto[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = 10;

    while (tamanho > 1) {
        for (int i = 0; i < tamanho; i += 2) {
            if (i + 1 < tamanho) {
                conjunto[i / 2] = conjunto[i] + conjunto[i + 1];
            } else {
                conjunto[i / 2] = conjunto[i];
            }
        }
        tamanho = (tamanho + 1) / 2;
    }

    printf("%d\n", conjunto[0]);

    return 0;
}