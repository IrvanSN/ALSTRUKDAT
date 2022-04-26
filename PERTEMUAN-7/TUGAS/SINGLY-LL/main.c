#include <stdio.h>
#include <stdlib.h>

typedef struct node *address;

struct node {
    int isi;
    address next;
};

address create_node(int nilai);
address insert_first(address head, int nilai);
void tampil_nilai(address head);
address reverse(address head);
address sorting(address head);

int main() {
    int pilih = -1;
    address head = NULL;
    head = insert_first(head, 56);
    head = insert_first(head, 7);
    head = insert_first(head, 20);
    head = insert_first(head, 41);
    head = insert_first(head, 28);
    head = insert_first(head, 56);
    head = insert_first(head, 86);
    head = insert_first(head, 40);
    head = insert_first(head, 97);
    head = insert_first(head, 33);

    do {
        tampil_nilai(head);
        printf("\n============ LINKED LIST ============\n");
        printf(" 1. Reverse\n");
        printf(" 2. Sorting\n");
        printf(" 3. Keluar\n");

        printf("\nPilihan Anda: ");
        scanf("%d", &pilih);

        switch (pilih) {
            case 1: {
                head = reverse(head);
                system("Pause");
                break;
            }
            case 2: {
                head = sorting(head);
                system("Pause");
                break;
            }
            case 3: {
                exit(1);
            }
            default: {
                printf("Pilihan tidak ditemukan!");
                break;
            }
        }
    } while (pilih != 0);

    return 0;
}

address create_node(int nilai) {
    address p;

    p = (address) malloc(sizeof (struct node));
    p->isi = nilai;
    p->next = NULL;
    return(p);
}

address insert_first(address head, int nilai) {
    address new_node = create_node(nilai);
    new_node->next = head;
    head = new_node;
    return(head);
}

void tampil_nilai(address head) {
    address n = head;
    printf("Daftar nilai Linked List:\n");
    while (n != NULL) {
        printf("[%d] ", n->isi);
        n = n->next;
    }
    printf("\n");
}

address reverse(address head) {
    address prev, curr;

    if(head != NULL) {
        prev = head;
        curr = head->next;
        head = head->next;

        prev->next = NULL;

        while (head != NULL) {
            head = head->next;
            curr->next=prev;

            prev = curr;
            curr = head;
        }

        head = prev;
    }
    return (head);
}

address sorting(address head) {
    address prev, last;
    last = NULL;

    int temp;
    int num = 1;

    if (head != NULL) {
        while (num) {
            num = 0;
            prev = head;

            while (prev->next != last) {
                if (prev->isi < prev->next->isi) {
                    temp = prev->isi;
                    prev->isi = prev->next->isi;
                    prev->next->isi = temp;
                    num = 1;
                }
                prev = prev->next;
            }
            last = prev;
        }
        return (head);
    }
}