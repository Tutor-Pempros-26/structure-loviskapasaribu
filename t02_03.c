// 12S25016 - Loviska Astria Pasaribu

#include <stdio.h>

// Struct untuk menyimpan data operasi
struct Operasi {
    char op;     // operator (+, -, *)
    int hasil;   // hasil perhitungan
    int count;   // jumlah input
};

int main() {
    struct Operasi o;
    int x;

    // Input operator
    scanf(" %c", &o.op);

    // Inisialisasi nilai awal
    if (o.op == '+') {
        o.hasil = 0;
    } 
    else if (o.op == '-') {
        o.hasil = 0;
    } 
    else if (o.op == '*') {
        o.hasil = 1;
    }

    o.count = 0;

    // Menampilkan operator
    printf("%c\n", o.op);

    // Perulangan untuk input angka
    while (1) {
        scanf("%d", &x);

        // Jika input -1, program berhenti
        if (x == -1) {
            printf("-1\n");
            printf("0\n");
            break;
        }

        // Jika sudah 4 kali input, berhenti
        if (o.count >= 4) {
            printf("%d\n", x);
            printf("%d\n", o.hasil);
            break;
        }

        // Menampilkan angka yang diinput
        printf("%d\n", x);

        // Proses operasi sesuai operator
        if (o.op == '+') {
            o.hasil += x;
        } 
        else if (o.op == '-') {
            o.hasil -= x;
        } 
        else if (o.op == '*') {
            o.hasil *= x;
        }

        // Menampilkan hasil sementara
        printf("%d\n", o.hasil);

        o.count++;
    }

    return 0;
}