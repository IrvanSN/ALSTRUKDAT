#include <stdio.h>

float segitiga(int a1, int b1) {
    float l1;
    l1 = (0.5 * (a1 * b1));
    return l1;
}

float persegiPanjang(int a2, int b2) {
    int l2;
    l2 = a2 * b2;
    return l2;
}

float layang(int a3, int b3) {
    float l3;
    l3 = (0.5 * (a3 * b3));
    return l3;
}

int main() {
    int pil, sisi1, sisi2;
    float x;

    printf("Program menghitung luas dengan fungsi \n\n");
    printf("Pilih salah satu yang akan anda hitung\n");

    printf("1. Segitiga\n");
    printf("2. Persegi Panjang\n");
    printf("3. Layang\n");

    printf("\nPilih nomor: ");
    scanf("%d", &pil);

    printf("Masukkan sisi 1 yang akan dihitung: ");
    scanf("%d", &sisi1);

    printf("Masukkan sisi 2 yang akan dihitung: ");
    scanf("%d", &sisi2);

    if(pil == 1) {
        x = segitiga(sisi1, sisi2);
    } else if (pil == 2) {
        x = persegiPanjang(sisi1, sisi2);
    } else if (pil == 3) {
        x = layang(sisi1, sisi2);
    } else {
        printf("Pilihan tidak ditemukan!");
    }

    printf("\n\nHasilnya adalah %.1f", x);
    return 0;
}
