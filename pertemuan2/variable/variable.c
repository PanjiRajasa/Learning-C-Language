#include <stdio.h>

int main() {
    // variable integer
    int umur;
    umur = 15;
    printf("Variable umur: %d\n", umur);

    // variable float
    float berat_badan = 39.9;
    printf("Berat badan: %.2f\n", berat_badan);

    //variable char
    char nilai_ascii = '\x41';
    printf("Nilai ASCII dari \\x41: %c\n", nilai_ascii);

    //variable integer
    int contoh_integer = 99;
    printf("Contoh variable integer: %d\n", contoh_integer);

    //variable float
    float contoh_float = 99.12;
    printf("Contoh variable float: %2f\n", contoh_float);

    //variable char
    char contoh_char = '\x21';
    printf("Contoh karakter char: %c(\\x21)\n", contoh_char);

    return 0;
}