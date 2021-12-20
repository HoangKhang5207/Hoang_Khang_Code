#include <stdio.h>
#define MAX 50
int i;
void In_Array(float a[], int n) {
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}
void Out_Array(float a[], int n) {
    for (i = 0; i < n; i++) {
        printf("%5.0f", a[i]);
    }
}
void Lietke(float a[], int n, float x, float y) {
    for (i = 0; i < n; i++) {
        if (x <= a[i] && y >= a[i])
            printf("%5.0f", a[i]);
    }
}
int main() {
    float a[MAX], x, y;
    int n;
    do {
        printf("Ban hay nhap x: ");
        scanf("%f", &x);
        printf("Ban hay nhap y: ");
        scanf("%f", &y);
        if (x >= y)
            printf("Nhap x va y khong hop le, hay nhap lai (x < y).\n");
    } while (x >= y);
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
        if (n <= 0 || n > MAX)
            printf("Nhap so luong phan tu khong hop le, hay nhap lai (n > 0, n <= 50).\n");
    } while (n <= 0 || n > MAX);
    In_Array(a, n);
    printf("Mang a gom:");
    Out_Array(a, n);
    printf("\nCac gia tri trong mang thuoc doan [%.0f, %.0f] la:", x, y);
    Lietke(a, n, x, y);
    return 0;
}