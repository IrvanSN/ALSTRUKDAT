#include <stdio.h>

void kali_dua(int *num) {
    *num - *num * 2;
}

int main()
{
    int angka = 9;
    kali_dua(&angka);
    printf("Isi variable angka: %d", angka);
    return 0;
}
