#include <stdio.h>
#include <stdlib.h>

typedef struct user *address;

struct user {
    int age;
    address next;
};

address create_node(int age) {
    address u;

    u = (address) malloc(sizeof (struct user));
    u->age = age;
    u->next = NULL;
}

address insert_first(int age) {
    address n;

    n = create_node(age);
}

void add_score(int *score) {
    *score = *score * 5;
}

int test(int (*arr)[2]) {
    printf("%d\n", *arr[0]);
    printf("%d\n", *arr[0] + 1);
    printf("%d\n", *arr[1]);
    printf("%d\n", *arr[1] +1);

}

int main() {
//    int score = 0;
//    for (int i = 5; i > 0; --i) {
//        add_score(&score);
//    }
//    printf("%d\n", score);

//    int arr[2][2] = {{1,2}, {7,8}};
//    test(arr);

    char ch;C
    return 0;
}
