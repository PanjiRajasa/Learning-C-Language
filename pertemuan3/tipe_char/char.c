#include <stdio.h>

int main() {
    //char berbentuk huruf tunggal
     char huruf = 'z';
     printf("Nilai dari char huruf: %c\n", huruf);

     //char berbentuk escape sequence
     char tabulation = '\t';
     printf("NIlai dari char tabulation \\t:%cteks setelah tabulation\n", tabulation);

     //tipe data string
     char nama[] = "Panji";
     printf("Nilai dari string: %s\n", nama);

     //kita juga bisa mencetak karakter ASCII dengan menggunakan format specifier %d
     printf("Nilai ASCII dari char huruf '%c' adalah: %d\n", huruf, huruf);

     //

    return 0;
}