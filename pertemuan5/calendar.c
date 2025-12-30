#include <stdio.h>

// fungsi untuk mengecek tahun kabisat (habid dibagi 4 atau 400, tetapi tidak habis dibagi 100)
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Mendapatkan indeks hari pertama (0-6) untuk awal bulan tersebut
/*
Logika inti fungsi ini adalah ekspresi (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7, yang merupakan rumus matematika untuk algoritma Sakamoto. Array t[] menyimpan nilai offset spesifik untuk setiap bulan. Penyesuaian if (m < 3) y -= 1; menangani tahun kabisat dengan benar untuk Januari dan Februari.
Nilai Kembalian: Fungsi ini mengembalikan bilangan bulat antara 0 dan 6, inklusif, di mana setiap angka mewakili hari dalam seminggu. Dalam implementasi khusus ini, pemetaan biasanya sebagai berikut:

0: Minggu

1: Senin

2: Selasa

3: Rabu

4: Kamis

5: Jumat

6: Sabtu
*/
int getFirstDay(int d, int m, int y) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    if (m < 3) y -= 1;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

//fungsi untuk menampilkan kalender
void printCalendar(int year) {
    // Array of pointers untuk menyimpan daftar nama bulan
    char *months[] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", 
                      "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

    //hari dalam bulan
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year)) daysInMonth[1] = 29; // Penyesuaian Februari jika terdeteksi tahun kabisat
    
    //looping ke array untuk membuat tampilan kalender
    for (int m = 0; m < 12; m++) {
        printf("\n\n  ------------ %s %d ------------\n", months[m], year);
        printf("  Ming  Sen  Sel  Rab  Kam  Jum  Sab\n");

        int currentDay = getFirstDay(1, m + 1, year); //mengambil hari saat ini

        // Cetak spasi kosong sebelum tanggal 1
        for (int i = 0; i < currentDay; i++) printf("     ");

        //Loop yang berjalan dari tanggal 1 sampai jumlah hari maksimal dalam bulan tersebut (misal 28, 30, atau 31).
        for (int d = 1; d <= daysInMonth[m]; d++) {
            printf("%5d", d); //Mencetak tanggal saat ini dengan lebar karakter sebesar 5 slot (agar kolom tanggal sejajar rapi ke bawah).

            //Jika nilai hari saat ini mencapai lebih dari 6 (artinya sudah melewati Sabtu), maka kondisi menjadi true
            if (++currentDay > 6) { // Pindah baris setelah Sabtu
                printf("\n");
                currentDay = 0; //Jika sudah melewati Sabtu, cetak baris baru untuk memulai minggu berikutnya dan reset hitungan hari kembali ke 0 (Minggu).
            }
        }
    }
}

int main() {
    int tahun; //variable ini akan menyimpan tahun yang ingin user cek

    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    //panggil fungsi printCalendar
    printCalendar(tahun);

    printf("\n\n");

    return 0;
}