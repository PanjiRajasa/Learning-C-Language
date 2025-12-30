#include <stdio.h>

int main() {
    int angka1 = 0, angka2 = 1; //dua angka awal fibonacci

    //variable akumulator untuk menyimpan nilai hasil penjumlahan per iterasi
    int sum = 0;

    //loop yang berjalan 18 kali
    for(int i = 0; i < 18; i++) {
        sum = angka1 + angka2;
        printf("%d\n", sum);
        angka1 = angka2;
        angka2 = sum;
    }

    return 0;
}