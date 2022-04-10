#include <stdio.h>

void soalsatu() {
    int size1, size2;
    int n, tanda1 = -1, tanda2 = -1;

    printf("Masukkan jumlah size array 1: ");
    scanf("%d", &size1);

    printf("Masukkan jumlah size array 2: ");
    scanf("%d", &size2);

    printf("\n");

    int arr[size1][size2];

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            printf("Masukkan angka indeks ke (%d,%d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Cetak awal mula array\n");

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            printf("Angka indeks ke (%d,%d): %d \n", i, j, arr[i][j]);
        }
    }

    printf("Masukkan angka yang ingin dicari: ");
    scanf("%d", &n);

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            if(arr[i][j] == n) {
                tanda1 = i;
                tanda2 = j;
                break;
            }
        }
    }

    if(tanda1 != -1 && tanda2 != -1) {
        arr[tanda1][tanda2] = 0;
    } else {
        printf("Anga tidak ditemukan!");
    }

    printf("Cetak hasil akhir array\n");

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            printf("Angka indeks ke (%d,%d): %d\n", i, j, arr[i][j]);
        }
    }

    printf("\n===========================\n");
    printf("\n===== END OF FUNCTION =====\n");
    printf("\n===========================\n");
}

void soaldua() {
    int size1, size2;
    int n, tanda1 = -1, tanda2 = -1;

    printf("Masukkan jumlah size array 1: ");
    scanf("%d", &size1);

    printf("Masukkan jumlah size array 2: ");
    scanf("%d", &size2);

    printf("\n");

    int arr[size1][size2];

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            printf("Masukkan angka indeks ke (%d,%d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nCetak awal mula array\n");

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            printf("Angka indeks ke (%d,%d): %d \n", i, j, arr[i][j]);
        }
    }

    printf("\nMasukkan angka yang ingin dicari: ");
    scanf("%d", &n);

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            if(arr[i][j] == n) {
                tanda1 = i;
                tanda2 = j;
                break;
            }
        }
    }

    if(tanda1 != -1 && tanda2 != -1) {
        int angkaBaru;

        printf("\nMasukkan angka baru untuk indeks ke (%d,%d): ", tanda1, tanda2);
        scanf("%d", &angkaBaru);

        arr[tanda1][tanda2] = angkaBaru;
    } else {
        printf("Anga tidak ditemukan!");
    }

    printf("\nCetak hasil akhir array\n");

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            printf("Angka indeks ke (%d,%d): %d \n", i, j, arr[i][j]);
        }
    }

    printf("\n===========================\n");
    printf("\n===== END OF FUNCTION =====\n");
    printf("\n===========================\n");
}

void noenam() {
    int arr[6] = { 1, 20, 5, 78, 30, 28 };
    int n, i, index = -1;

    printf("Masukan elemen yang ingin dihapus = ");
    scanf("%d", &n);

    for(i = 0; i < 6; i++) {
        if(arr[i] == n) {
            index = i;
            break;
        }
    }

    if(index != -1) {
        arr[i] = 0;
    } else {
        printf("Element tidak ditemukan!\n");
    }

    int j;
    printf("Array baru: ");
    for(i = 0; i < 6; i++) {
        printf("%d", arr[i]);
    }

    printf("\n===========================\n");
    printf("\n===== END OF FUNCTION =====\n");
    printf("\n===========================\n");
}

void searching() {
    int arr[10] = { 2, 5, 7, 3, 4, 6, 2 };
    int n, i;

    printf("%i\n", arr[0]);
    printf("%2i\n", arr[0]);

    for(i = 0; i < 10; i++) {
        printf("%2i", arr[i]);
    }

    printf("\n");
    printf("\nBilangan yang dicari: ");
    scanf("%i", &n);

    i = 0;

    while((arr[i] != n) && (i < 10)) {
        i = i + 1;
    }

    printf("===========================\n");
    printf("===== END OF FUNCTION =====\n");
    printf("===========================\n");
}

void checkOddOrNo() {
    int size;
    printf("Masukkan jumlah size array: ");
    scanf("%d", &size);

    printf("\n");

    int arr[size];

    for(int i = 0; i < size; i++) {
        printf("Masukkan angka indeks ke %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            printf("Array indeks ke %d yaitu %d adalah angka genap\n", i, arr[i]);
        }  else {
            printf("Array indeks ke %d yaitu %d adalah angka ganjil\n", i, arr[i]);
        }
    }

    printf("===========================\n");
    printf("===== END OF FUNCTION =====\n");
    printf("===========================\n");
};

int main() {
    int arr[2] = { 11, 20 };
    printf("%d", &arr[0]);
    return 0;
}