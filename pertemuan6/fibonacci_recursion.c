#include <stdio.h>

int count = 0; //variable untuk count

void fibonacci(int a1, int a2) {
    //fibonacci 18 angka
    if(count < 18) {
        int sum = a1 + a2; //variable untuk jumlah setiap 2 angka
        printf("%d\n", sum);

        //pertukaran variable untuk mensimulasikan fibonacci
        a1 = a2;
        a2 = sum;

        count++; //increment variable iterator
        fibonacci(a1, a2); //rekursif untuk angka berikutnya 
    }
}

int main() {
    printf("Fungsi fibonacci: \n");
    printf("0\n");
    printf("1\n");
    fibonacci(0, 1);

    return 0;
}