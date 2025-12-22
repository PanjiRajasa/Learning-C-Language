#include <stdio.h>

int main() {
    //format integer/whole number
    printf("Contoh nilai desimal: %d\n", 12);

    //format bilangan hexadecimal
    printf("Nilai heksa desimal: %x\n", 0xFF);

    //format octal
    printf("Nilai oktal: %o\n", 017);

    //format floating point/decimal
    printf("Nilai float: %.2f\n", 99.26);

    // notasi scientific
    printf("Nilai dari notasi scientific 1.23e3: %e\n", 1.23e3);

    return 0;
}