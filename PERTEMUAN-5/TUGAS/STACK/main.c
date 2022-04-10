#include <stdio.h>
#include <string.h>
#define MAX 3

struct KTP {
    char nama_lengkap[100];
    int usia;
};

int top = -1;
struct KTP stack[MAX];

int isEmpty() {
    if(top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isFull() {
    if(top == MAX) {
        return 1;
    } else {
        return 0;
    }
}

void push(struct KTP data) {
    if(!isFull()) {
        top++;
        stack[top] = data;
    } else {
        printf("\nGagal push data!");
    }
}

struct KTP pop() {
    struct KTP temp;

    if(!isEmpty()) {
        temp = stack[top];
        top--;
        return temp;
    } else {
        printf("\nGagal pop data!");
    }
}

struct KTP peek() {
    return stack[top];
}

int main() {
    struct KTP temp;

    printf("\nPercobaan push data KTP (Masukkan data ke stack)");
    printf("\nPush KTP 1");
    strcpy(temp.nama_lengkap, "IRVAN SURYA NUGRAHA");
    temp.usia = 19;
    push(temp);

    printf("\nPush KTP 2");
    strcpy(temp.nama_lengkap, "ELANG SATRIA P. B.");
    temp.usia = 20;
    push(temp);

    printf("\nPush KTP 3\n");
    strcpy(temp.nama_lengkap, "ANDI DIVANGGA");
    temp.usia = 22;
    push(temp);

    printf("\nPercobaan peek data KTP (Ambil data paling atas)");
    temp = peek();
    printf("\nNama: %s", temp.nama_lengkap);
    printf("\nUsia: %d\n", temp.usia);

    printf("\nPercobaan pop data KTP (Mengeluarkan data dari stack)");
    printf("\nPOP Pertama KTP");
    temp = pop();
    printf("\nNama: %s", temp.nama_lengkap);
    printf("\nUsia: %d\n", temp.usia);

    printf("\nPOP Kedua KTP");
    temp = pop();
    printf("\nNama: %s", temp.nama_lengkap);
    printf("\nUsia: %d\n", temp.usia);

    printf("\nPOP Ketiga KTP");
    temp = pop();
    printf("\nNama: %s", temp.nama_lengkap);
    printf("\nUsia: %d\n", temp.usia);

    printf("\nPOP Keempat KTP");
    temp = pop();
    return 0;
}
