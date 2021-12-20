#include <stdio.h>
#include <math.h>

int Songuyento(int x) {
    if (x < 2)
        return 0;
    else if (x >= 2) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    do {
        printf("Nhap so nguyen n: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("Nhap n > 0, hay nhap lai n.\n");
    } while (n <= 0);
    printf("%d so nguyen to dau tien la: ", n);
    int dem = 0;
    int i = 2;
    while (dem < n) {
        if (Songuyento(i)) {
            printf("%d  ", i);
            dem++;
        }
        i++;
    }
    return 0;
}