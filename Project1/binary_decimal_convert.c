#include <math.h>
#include <stdio.h>

// 1st program: binary to decimal

//int convert(long long n);
//int main() {
//    long long n;
//    printf("Enter a binary number: ");
//    scanf_s("%lld", &n);
//    printf("%lld in binary = %d in decimal", n, convert(n));
//    return 0;
//}
//
//int convert(long long n) {
//    int dec = 0, i = 0, rem;
//    while (n != 0) {
//        rem = n % 10;
//        n /= 10;
//        dec += rem * pow(2, i);
//        ++i;
//    }
//    return dec;
//}

// 2nd program: decimal to binary

inline long long convert(int n);
int binary_decimal_convert() {
    int n;
    printf("Enter a decimal number: ");
    scanf_s("%d", &n);
    printf("%d in decimal = %lld in binary", n, convert(n));
    return 0;
}

//long long convert(int n) {
//    long long bin = 0;
//    int rem, i = 1, step = 1;
//    while (n != 0) {
//        rem = n % 2;
//        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
//        n /= 2;
//        bin += rem * i;
//        i *= 10;
//    }
//    return bin;
//}