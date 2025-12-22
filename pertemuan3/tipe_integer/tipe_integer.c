#include <stdio.h>

int main() {
    //tipe data short (paling kecil isinya)
    //signed short 32.768 s.d 32.767
    short signed_short = 32;
    printf("Nilai signed short: %hd\n", signed_short);

    // unsigned short (nilainya selalu positif)
    unsigned short unsigned_short = 675;
    printf("Nilai unsigned short: %u\n", unsigned_short);

    //tipe data int (umumnya digunakan untuk bilangan bulat)
    //signed int -2.147.483.648 s.d 2.147.483.647
    int signed_int = -2048;
    printf("Nilai signed int: %d\n", signed_int);

    //unsigned int (nilainya selalu positif)
    unsigned int unsigned_int = 4078;
    printf("Nilai unsigned int: %u\n", unsigned_int);

    //tipe data long (memiliki kapasitas yang lebih besar dari int)
    //signed long -9.223.372.036.854.775.808 s.d 9.223.372.036.854.775.807
    long signed_long = 2147483647;
    printf("Nilai signed_long: %ld\n", signed_long);

    //unsigned long (nilainya selalu positif)
    unsigned long unsigned_long = 4294967;
    printf("Nilai unsigned long: %lu\n", unsigned_long);

    //long long (memiliki kapasitas paling besar)
    //signed long long -9.223.372.036.854.775.808 s.d 9.223.372.036.854.775.807
    long long signed_long_long = -9223372036854775807;
    printf("Nilai signed long long: %lld\n", signed_long_long);

    //unsigned long long (nilainya selalu positif)
    unsigned long long unsigned_long_long = 18446744073709551615ULL;
    printf("Nilai unsigned long long: %llu\n", unsigned_long_long);

    return 0;
}