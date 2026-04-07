// 12S25016 - Loviska Astria Pasaribu

#include <stdio.h>

// Membuat struct untuk menyimpan data transaksi
struct Transaksi {
    int jumlah;      // jumlah buku
    float harga;     // harga per buku
    float total;     // total harga
    float diskon;    // besar diskon
};

int main() {
    struct Transaksi t;

    // Input jumlah buku
    scanf("%d", &t.jumlah);

    // Input harga per buku
    scanf("%f", &t.harga);

    // Menghitung total harga
    t.total = t.jumlah * t.harga;

    // Awalnya tidak ada diskon
    t.diskon = 0;

    // Mengecek kondisi diskon menggunakan if-else
    if (t.total > 500000) {
        t.diskon = t.total * 0.15;
    } 
    else if (t.total >= 100000) {
        t.diskon = t.total * 0.10;
    } 
    else if (t.total > 50000) {
        t.diskon = t.total * 0.05;
    }

    // Menampilkan hasil
    if (t.diskon == 0) {
        printf("---\n");
    } else {
        printf("%.2f\n", t.diskon);
    }

    printf("%.2f\n", t.total - t.diskon);

    return 0;
}