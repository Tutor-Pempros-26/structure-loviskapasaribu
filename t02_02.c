// 12S25016 - Loviska Astria Pasaribu

#include <stdio.h>

// Struct untuk menyimpan level menu
struct Menu {
    int level;
};

int main() {
    struct Menu m;

    // Input level menu
    scanf("%d", &m.level);

    // Menggunakan if-else untuk menentukan output
    if (m.level == 1) {
        printf("staple food\n");
        printf("you need side dishes\n");
    } 
    else if (m.level == 2) {
        printf("side dishes\n");
        printf("staple food\n");
        printf("you need vegetables\n");
    } 
    else if (m.level == 3) {
        printf("vegetables\n");
        printf("side dishes\n");
        printf("staple food\n");
        printf("good\n");
    } 
    else if (m.level == 4) {
        printf("fruits\n");
        printf("very good\n");
    } 
    else if (m.level == 5) {
        printf("milk\n");
        printf("perfect\n");
    }

    return 0;
}