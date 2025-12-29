#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    //persiapan variable
    int hours, minutes, seconds;
    time_t rawtime; //Variabel bertipe integer panjang untuk menyimpan total detik dari Unix Epoch.
    struct tm *info; //Sebuah pointer ke struktur yang akan menampung hasil konversi waktu ke format yang mudah dibaca (jam, menit, detik).

    printf("Live Clock:\n");
    //algoritma pembaruan waktu
    while (1) {
        time(&rawtime); //Fungsi ini mengambil jumlah detik saat ini dari sistem.
        info = localtime(&rawtime); //Fungsi ini memecah total detik menjadi komponen terpisah yang disimpan dalam struct tm. 

        // \r (carriage return) digunakan untuk mengembalikan kursor ke awal baris agar angka jam menimpa angka sebelumnya (efek jam berjalan).
        // %02d memastikan jika angka kurang dari 10, akan ditambah nol di depannya
        printf("\r%02d:%02d:%02d", info->tm_hour, info->tm_min, info->tm_sec);

        sleep(1); //agar program tidak membebani CPU secara berlebihan.

        fflush(stdout); //untuk memastikan angka segera tampil di layar tanpa menunggu antrean buffer sistem.
    }

    return 0;
}