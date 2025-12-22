#define __USE_MINGW_ANSI_STDIO 1 // agar bisa menggunakan format spesifier untuk long double di MinGW
#include <stdio.h>

int main() {
    //tipe data float (tipe data desimal yang umumumnya digunakan)
    float nilai_float = 39.124f;
    printf("nilai float: %.3f\n", nilai_float);

    //tipe data double (tipe data desimal dengan presisi yang lebih tinggi)
    double nilai_double = 99.123456;
    printf("nilai double: %.6lf\n", nilai_double);

    //tipe data long double (tipe data desimal dengan presisi yang paling tinggi)
    long double nilai_long_double = 678.123456789L;
    printf("nilai long double: %.9Lf\n", nilai_long_double);
    //printf("Ukuran long double: %zu byte\n", sizeof(long double));

    return 0;
}