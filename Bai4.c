//Bai 4: Dem so luong chu so cua so nguyen duong n
#include <stdio.h>
int main() {
    int n, count=0;

    printf("Nhap so n: ");
    scanf("%d", &n);

   if (n == 0) {
        count = 1; // Số 0 có 1 chữ số
    } else {
        int temp = n; 
        while (temp > 0) {
            temp = temp / 10;
            count++;
        }
    }

    printf("Số lượng chữ số của %d là: %d\n", n, count);
    return 0;
}