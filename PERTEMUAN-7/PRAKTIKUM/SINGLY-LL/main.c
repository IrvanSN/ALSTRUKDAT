#include <stdio.h>
#include <stdlib.h>

typedef struct node *address;

struct node {
    int isi;
    address next;
};

address create_node(int nilai);
address insert_first(address head, int nilai);
address insert_last(address head, int nilai);
address insert_after(address head, int nilai, int prev_nilai);
address insert_before(address head, int nilai, int next_nilai);
address delete_first(address head);
address delete_last(address head);
address delete_after(address head, int nilai);
void tampil_nilai(address head);
address count (address head);
address dispose(address head);


int main() {
    int pilih = -1, val, val1;
    address head = NULL;

    do {
        system("cls");
        tampil_nilai(head);
        printf("============ LINKED LIST ============\n");
        printf(" 1. Insert First\n");
        printf(" 2. Insert Last\n");
        printf(" 3. Insert After\n");
        printf(" 4. Insert Before\n");
        printf(" 5. Delete First\n");
        printf(" 6. Delete Last\n");
        printf(" 7. Delete After\n");
        printf(" 8. Hitung Jumlah Node\n");
        printf(" 9. Hapus Keseluruhan Node\n");
        printf(" 10. Keluar\n");
        printf("\nPilihan Anda: ");
        scanf("%d", &pilih);

        switch (pilih) {
            case 1: {
                printf("Masukkan nilai: ");
                scanf("%d", &val);
                head = insert_first(head, val);
                system("cls");
                break;
            }
            case 2: {
                printf("Masukkan nilai: ");
                scanf("%d", &val);
                head = insert_last(head, val);
                system("cls");
                break;
            }
            case 3: {
                printf("Masukkan nilai: ");
                scanf("%d", &val);
                printf("Ingin masukkan nilai tersebut setelah: ");
                scanf("%d", &val1);
                head = insert_after(head, val, val1);
                system("cls");
                break;
            }
            case 4: {
                printf("Masukkan nilai: ");
                scanf("%d", &val);
                printf("Ingin masukkan nilai tersebut sebelum: ");
                scanf("%d", &val1);
                head = insert_before(head, val, val1);
                system("cls");
                break;
            }
            case 5: {
                head = delete_first(head);
                system("cls");
                break;
            }
            case 6: {
                head = delete_last(head);
                system("cls");
                break;
            }
            case 7: {
                printf("Masukkan nilai yang ingin di hapus: ");
                scanf("%d", &val);
                system("cls");
                break;
            }
            case 8: {
                head = count(head);
                system("Pause");
                break;
            }
            case 9: {
                head = dispose(head);
                system("Pause");
                break;
            }
            case 10: {
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
    address  new_node = create_node(nilai);
    new_node->next = head;
    head = new_node;
    return(head);
}

address insert_last(address head, int nilai) {
    address tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    address new_node = create_node(nilai);
    tail->next = new_node;
    return(head);
}

address insert_after(address head, int nilai, int prev_nilai) {
    address cursor = head;
    while (cursor->isi != prev_nilai) {
        cursor = cursor->next;
    }

    address new_node = create_node(nilai);
    new_node->next = cursor->next;
    cursor->next = new_node;
    return(head);
}

address insert_before(address head, int nilai, int next_nilai) {
    if (head->isi == next_nilai) {
        head = insert_first(head, nilai);
    } else {
        address cursor, prev_cursor;
        cursor = head;

        do {
            prev_cursor = cursor;
            cursor = cursor->next;
        } while (cursor->isi != next_nilai);

        address new_node = create_node(nilai);
        new_node->next = cursor;
        prev_cursor->next = new_node;
    }

    return(head);
}

address delete_first(address head) {
    if (head != NULL) {
        address first = head;
        head = head->next;
        first->next = NULL;
        free(first);
        return(head);
    }
}

address delete_last(address head) {
    if (head != NULL) {
        address tail = head;
        address prev_tail = NULL;
        while (tail->next != NULL) {
            prev_tail = tail;
            tail = tail->next;
        }

        prev_tail->next = NULL;
        free(tail);
        return(head);
    }
}

address delete_after(address head, int nilai) {
    address cursor = head;
    while (cursor != NULL) {
        if (cursor->next->isi == nilai) {
            break;
        } cursor = cursor->next;
    }

    if (cursor != NULL) {
        address tmp = cursor->next;
        cursor->next = tmp->next;
        tmp->next = NULL;
        free(tmp);
    }

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

address count (address head) {
    int int_count = 0;
    struct node *p;
    p = head;
    while (head != NULL) {
        int_count++;
        head = head->next;
    }
    printf("Jumlah node adalah: %d \n", int_count);
    return p;
}

address dispose(address head) {
    if(head != NULL) {
        struct node *temp;
        while (head != NULL) {
            temp = head;
            head = head->next;

            free(temp);
        }

        printf("Semua Node Telah Dihapus\n");
        return(head);
    }
}