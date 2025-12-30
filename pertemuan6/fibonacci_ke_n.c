#include <stdio.h>

int fibonacciKe(int number) {
    if(number <= 1) {
        return number;
    } else {
        return fibonacciKe(number -1) + (number -2);
    }

}

int main() {
    printf("Hasil fibonacci angka 19 adalah %d", fibonacciKe(19));

    return 0;
}