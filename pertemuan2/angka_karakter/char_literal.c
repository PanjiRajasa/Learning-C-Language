#include <stdio.h>

int main() {
    //karakter tunggal
    printf("Contoh karakter char: %c\n", 'B');

    // angka tunggal
    printf("Contoh angka tunggal: %c\n", '1');

    //simbol khusus
    printf("Contoh simbol khusus: %c\n", '*');

    // escape character
    printf("Contoh newline: %c\nini adalah baris baru\n", '\n');
    printf("Contoh karakter tabulation: Tab%c kalimat setelah tabulation\n", '\t');

    //karakter ASCII
    printf("Contoh karakter ascii: %c(\\x41)\n", '\x41');

    //

    return 0;
}