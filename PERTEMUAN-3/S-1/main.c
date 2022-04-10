#include <stdio.h>
#include <stdlib.h>

float rumus(int a1, int b2, int pil) {
    float result;
    switch (pil) {
        case 1: {
            result = (0.5 * (a1 * b2));
            break;
        }
        case 2: {
            result = a1 * b2;
            break;
        }
        case 3: {
            result = (0.5 * (a1 * b2));
            break;
        }
        default: {
            printf("Pilihan tidak ditemukan!");
        }
    }
    return result;
}

int main()
{
    int pil, sisi1, sisi2;
    float x;

    printf("Program menghitung luas dengan fungsi \n\n");
    printf("Pilih salah satu yang akan anda hitung\n");

    printf("1. Segitiga\n");
    printf("2. Persegi Panjang\n");
    printf("3. Layang\n");

    printf("\nPilih nomor: ");
    scanf("%d", &pil);

    printf("\nMasukkan sisi 1 yang akan dihitung: ");
    scanf("%d", &sisi1);

    printf("Masukkan sisi 2 yang akan dihitung: ");
    scanf("%d", &sisi2);

    printf("\n\nHasil dari perhitungan: %.1f\n", rumus(sisi1, sisi2, pil));
    return 0;
}
