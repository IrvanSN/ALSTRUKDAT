#include <stdio.h>

float segitiga (int a1, int b1) {
    float l1;
    l1 = 0.5 * (a1 * b1);
    return l1;
}

int main() {
    int sisi1, sisi2;
    float x;

    printf("Menghitung luas segitiga dengan fungsi\n\n");
    printf("Pilih salah satu yang akan anda hitung\n");

    printf("Masukkan sisi 1 yang akan di hitung: ");
    scanf("%d", &sisi1);

    printf("Masukkan sisi 2 yang akan di hitung: ");
    scanf("%d", &sisi2);

    x = segitiga(sisi1, sisi2);

    printf("\nHasilnya adalah %.1f cm", x);
    printf("\n");
    return 0;
}
