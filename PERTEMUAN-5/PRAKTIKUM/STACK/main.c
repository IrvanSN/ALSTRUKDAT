#include <stdio.h>
#include <stdlib.h>
#define max 5

typedef struct {
    int top;
    int data[max]
} stack;

void createEmpty(stack *s);
int isEmpty(stack s);
int isFull(stack s);
void push(stack *s, int isi);
void pop(stack *s);
int peek(stack s);

int main() {
    stack s;
    int input;
    int pilih;
    createEmpty(&s);
    pilih = 0;
    while (pilih != 5) {
        if(isEmpty(s) == 1) {
            puts("\nStack Masih kosong\n");
        } else if ((isEmpty(s) == 0) && (isFull(s) == 0)) {
            printf("Nilai pada stack: ");
            for(int i = s.top; i >= 0; i--) {
                printf("[%d]", s.data[i]);
            }
            printf("\n\n");
        } else {
            puts("\nStack sudah penuh\n");
        }
        puts("======== Menu Utama ========");
        puts("1: Tambah data (Push)");
        puts("2: Keluarkan isi stack (Pop)");
        puts("3: Lihat data teratas (Peek)");
        puts("4: Kosongkan stack");
        puts("5: Keluar");
        printf("Pilihan Anda: ");
        scanf("%d", &pilih);

        switch (pilih) {
            case 1: {
                if(isFull(s) == 1) {
                    puts("\nStack penuh\n");
                } else {
                    printf("\nMasukkan data: ");
                    scanf("%d", &input);
                    push(&s, input);
                }

                system("cls");
                break;
            }
            case 2: {
                printf("\nTop bernilai: %d\n\n", s.data[s.top]);
                pop(&s);
                system("pause");
                system("cls");
                break;
            }
            case 3: {
                if(isEmpty(s)) {
                    puts("\nStack kosong\n");
                } else {
                    printf("\nNilai paling atas: %d\n\n", peek(s));
                }
                break;
            }
            case 4: {
                while (isEmpty(s) == 0) {
                    printf("\nPop: %d \n\n", peek(s));
                }
                puts("\nStack sudah kosong\n");
                system("pause");
                system("cls");
                break;
            }
            case 5:
                puts("\n===== Terima kasih =====");
                exit(0);
        }
    }
    return 0;
}

void createEmpty(stack *s) {
    s->top = -1;
}

void push(stack *s, int x) {
    s->top = s->top - 1;
    s->data[s->top] = x;
}

void pop(stack *s) {
    s->top = s->top - 1;
}

int peek(stack s) {
    return s.data[s.top];
}

int isEmpty(stack s) {
    if(s.top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isFull(stack s) {
    if(s.top == max) {
        return 1;
    } else {
        return 0;
    }
}