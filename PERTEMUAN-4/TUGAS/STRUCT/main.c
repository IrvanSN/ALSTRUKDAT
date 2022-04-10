#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

struct Alamat_Struct {
    char kelurahan[100];
    char kecamatan[100];
    char kota[100];
};

struct Mahasiswa {
    int nim;
    char nama_lengkap[100];
    struct Alamat_Struct alamat;
    float ipk;
};

void lihat_data(struct Mahasiswa mhs[], int size, int option);
void edit_data(struct Mahasiswa mhs[], int count_curr_data, int nim);
void input_data(struct Mahasiswa mhs[], int count_curr_data, int count_data_input);

int main() {
    int option = -1;

    int size = 3;
    int *ptr_size;
    ptr_size = &size;

    struct Mahasiswa data[MAX];

    // Data statis untuk struct mahasiswa
    data[0].nim = 1203210002;
    strcpy(data[0].nama_lengkap, "BUDI SANTOSO");
    strcpy(data[0].alamat.kecamatan, "SAWOTRATAP");
    strcpy(data[0].alamat.kelurahan, "GEDANGAN");
    strcpy(data[0].alamat.kota, "SIDOARJO");
    data[0].ipk = 2;
    data[1].nim = 1203210001;
    strcpy(data[1].nama_lengkap, "IRVAN SURYA");
    strcpy(data[1].alamat.kecamatan, "KEBOANSIKEP");
    strcpy(data[1].alamat.kelurahan, "GEDANGAN");
    strcpy(data[1].alamat.kota, "SIDOARJO");
    data[1].ipk = 4;
    data[2].nim = 1203210000;
    strcpy(data[2].nama_lengkap, "MAWAR");
    strcpy(data[2].alamat.kecamatan, "KEBOANANOM");
    strcpy(data[2].alamat.kelurahan, "GEDANGAN");
    strcpy(data[2].alamat.kota, "SIDOARJO");
    data[2].ipk = 4;

    do {
        printf("\n===== Daftar menu program =====\n");
        printf("1: Lihat semua data mahasiswa\n");
        printf("2: Input 1 data mahasiswa\n");
        printf("3: Input 3 data mahasiswa\n");
        printf("4: Lihat data mahasiswa yang memiliki IPK < 3.00\n");
        printf("5: Lihat data mahasiswa berdasarkan urutan NIM ascending\n");
        printf("6: Ubah data mahasiswa berdasarkan NIM\n");
        printf("0: Exit Program\n\n");

        printf("Pilih menu: ");
        scanf("%d", &option);

        switch (option) {
            case 0: {
                printf("Program telah dihentikan!");
                exit(EXIT_SUCCESS);
            }
            case 1: {
                int count_curr_data = *ptr_size;
                lihat_data(data, count_curr_data, option);
                break;
            }
            case 2: {
                int count_data_input = 1;
                int count_curr_data = *ptr_size;
                input_data(data, count_curr_data, count_data_input);
                *ptr_size += 1;
                break;
            }
            case 3: {
                int count_data_input = 3;
                int count_curr_data = *ptr_size;
                input_data(data, count_curr_data, count_data_input);
                *ptr_size += 3;
                break;
            }
            case 4: {
                int count_curr_data = *ptr_size;
                lihat_data(data, count_curr_data, option);
                break;
            }
            case 5: {
                int count_curr_data = *ptr_size;
                lihat_data(data, count_curr_data, option);
                break;
            }
            case 6: {
                int selected_data;
                int count_curr_data = *ptr_size;

                printf("\nSilahkan ketikkan NIM dari data yang akan diubah: ");
                scanf("%d", &selected_data);
                edit_data(data, count_curr_data, selected_data);
                break;
            }
            default: {
                printf("Menu tidak ditemukan!");
                exit(EXIT_FAILURE);
            }
        }
    } while (option != 0);
    return 0;
}

void input_data(struct Mahasiswa mhs[], int count_curr_data, int count_data_input) {
    for(int i = count_curr_data; i < count_curr_data + count_data_input; i++) {
        printf("\nInputkan data mahasiswa yang ke-%d\n", i + 1);

        printf("NIM: ");
        scanf("%d", &mhs[i].nim);
        printf("Nama Lengkap: ");
        scanf(" %[^\n]%*c", mhs[i].nama_lengkap);
        printf("Alamat: \n");
        printf("   Kelurahan: ");
        scanf(" %[^\n]%*c", mhs[i].alamat.kelurahan);
        printf("   Kecamatan: ");
        scanf(" %[^\n]%*c", mhs[i].alamat.kecamatan);
        printf("   Kota: ");
        scanf(" %[^\n]%*c", mhs[i].alamat.kota);
        printf("IPK: ");
        scanf("%f", &mhs[i].ipk);
    }
}

void edit_data(struct Mahasiswa mhs[], int count_curr_data, int nim) {
    //            debugger
    printf("hasil nim: %d", nim);
    for(int i = 0; i < count_curr_data; i++) {
        if(mhs[i].nim == nim) {
//            printf("\nData dari NIM %d ditemukan, berikut datanya.\n", nim);
//            printf("NIM: %d\n", mhs[i].nim);
//            printf("Nama Lengkap: %s\n", mhs[i].nama_lengkap);
//            printf("Alamat: %s, %s, %s\n", mhs[i].alamat.kelurahan, mhs[i].alamat.kecamatan, mhs[i].alamat.kota);
//            printf("IPK: %.2f\n", mhs[i].ipk);

            printf("\nSilahkan inputkan data baru dari NIM %d\n", nim);
            printf("NIM: ");
            scanf("%d", &mhs[i].nim);
            printf("Nama Lengkap: ");
            scanf(" %[^\n]%*c", mhs[i].nama_lengkap);
            printf("Alamat: \n");
            printf("   Kelurahan: ");
            scanf(" %[^\n]%*c", mhs[i].alamat.kelurahan);
            printf("   Kecamatan: ");
            scanf(" %[^\n]%*c", mhs[i].alamat.kecamatan);
            printf("   Kota: ");
            scanf(" %[^\n]%*c", mhs[i].alamat.kota);
            printf("IPK: ");
            scanf("%f", &mhs[i].ipk);
        }
    }
}

void lihat_data(struct Mahasiswa mhs[], int size, int option) {
    switch (option) {
        case 1: {
            for(int i = 0; i < size; i++) {
                printf("\nHasil data mahasiswa ke-%d\n", i + 1);
                printf("NIM: %d\n", mhs[i].nim);
                printf("Nama Lengkap: %s\n", mhs[i].nama_lengkap);
                printf("Alamat: %s, %s, %s\n", mhs[i].alamat.kelurahan, mhs[i].alamat.kecamatan, mhs[i].alamat.kota);
                printf("IPK: %.2f\n", mhs[i].ipk);
            }
            break;
        }
        case 4: {
            printf("\nData berikut adalah IPK < 3.00\n");
            for(int i = 0; i < size; i++) {
                if(mhs[i].ipk < 3.00) {
                    printf("\nNIM: %d\n", mhs[i].nim);
                    printf("Nama Lengkap: %s\n", mhs[i].nama_lengkap);
                    printf("Alamat: %s, %s, %s\n", mhs[i].alamat.kelurahan, mhs[i].alamat.kecamatan, mhs[i].alamat.kota);
                    printf("IPK: %.2f\n", mhs[i].ipk);
                }
            }
            break;
        }
        case 5: {
            struct Mahasiswa temp;

            for(int i = 0; i < size - 1; i++) {
                for(int j = 0; j < (size - 1 - i); j++) {
                    if(mhs[j].nim > mhs[j + 1].nim) {
                        temp = mhs[j];
                        mhs[j] = mhs[j + 1];
                        mhs[j + 1] = temp;
                    }
                }

            }

            printf("\nData berikut adalah yang telah disorting ascending dari NIM\n");
            for(int i = 0; i < size; i++) {
                printf("\nHasil data mahasiswa ke-%d\n", i + 1);
                printf("NIM: %d\n", mhs[i].nim);
                printf("Nama Lengkap: %s\n", mhs[i].nama_lengkap);
                printf("Alamat: %s, %s, %s\n", mhs[i].alamat.kelurahan, mhs[i].alamat.kecamatan, mhs[i].alamat.kota);
                printf("IPK: %.2f\n", mhs[i].ipk);
            }
            break;
        }
    }
}