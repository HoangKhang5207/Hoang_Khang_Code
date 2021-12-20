#include <stdio.h>
#include <math.h>

int Songuyento(int n) {
    int result = 1;
    if (n < 2) {
        printf("%d khong phai la so nguyen to.", n);
        return 0;
    }
    else if (n >= 2) {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0)
                result = 0;
        }
    }
    if (result == 1)
        printf("%d la so nguyen to.", n);
    else
        printf("%d khong phai la so nguyen to", n);
    return 1;
}
int main() {
    int x;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    Songuyento(x);
    return 0;
}