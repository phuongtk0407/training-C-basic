//Bai 3: Liet ke cac uoc so nguyen duong n
#include <stdio.h>
int main() {
    int n, S=0;

    printf("Nhap so n: ");
    scanf("%d", &n);

    printf("Cac uoc so nguyen duong cua %d la: ", n);
    for( int i = 1; i <= n; i++) {
            if(n % i == 0) {
                printf("%d ", i);
                    }
    }
    printf("\n");
    return 0;
}