#include <stdio.h>
#include <stdlib.h>

int tukar(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int var_a, var_b;
    var_a = 10;
    var_b = 12;

    printf("Nilai awal variable a: %d\n", var_a);
    printf("Nilai awal variable b: %d\n", var_b);

    tukar(&var_a, &var_b);

    printf("Setelah ditukar: \n");
    printf("Variable a: %d\n", var_a);
    printf("Variable b: %d", var_b);


    return 0;
}
