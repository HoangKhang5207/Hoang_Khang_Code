#include <stdio.h>
#include <math.h>

int Sochinhphuong(int x);

int main() {
    int n;
    do {
        printf("Nhap so nguyen n: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("Nhap n > 0, hay nhap lai n.\n");
    } while (n <= 0);
    printf("%d so chinh phuong dau tien la: ", n);
    Sochinhphuong(n);
    return 0;
}

int Sochinhphuong(int x) {
    int i = 1, chinhphuong, dem = 0;
    while (dem < x) {
        chinhphuong = 0;
        for (int So = 1; So <= i; So++) {
            if (So * So == i)
                chinhphuong = 1;
        }
        if (chinhphuong == 1) {
            printf("%d  ", i);
            dem++;
        }
        i++;
    }
    return 0;
}