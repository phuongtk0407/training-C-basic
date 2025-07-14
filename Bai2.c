//Bai 2: Tinh tong S = 1^2 + 2^2 + ... + n^2
#include <stdio.h>
int main() {
    int n, S=0;

    printf("Nhap so n: ");
    scanf("%d", &n);
    for( int i = 1; i <= n; i++) {
            S += i*i;
    }
    printf("Tong S = %d\n", S);
    return 0;
}