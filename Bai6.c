#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cac uoc so le cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
