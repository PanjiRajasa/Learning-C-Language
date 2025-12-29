#include <stdio.h>

int main() {
    int nilai_1 = 10, nilai_2 = 5, nilai_3 = 7;

    //contoh penggunaan
    int hasil_penjumlahan = nilai_1 + nilai_2;
    int hasil_pengurangan = nilai_2 - (-nilai_3);
    int hasil_perkalian = nilai_3 * nilai_1;
    int hasil_pembagian = nilai_1 / nilai_2;
    int hasil_modulus = nilai_3 % nilai_2;

    //menampilkan hasil
    printf("Hasil dari %d + %d adalah %d\n", nilai_1, nilai_2, hasil_penjumlahan );
    printf("Hasil dari %d - %d adalah %d\n", nilai_2, nilai_3, hasil_pengurangan );
    printf("Hasil dari %d * %d adalah %d\n", nilai_3, nilai_1, hasil_perkalian );
    printf("Hasil dari %d / %d adalah %d\n", nilai_1, nilai_2, hasil_pembagian );
    printf("Hasil dari %d %% %d adalah %d\n", nilai_3, nilai_2, hasil_modulus );

    return 0;
}