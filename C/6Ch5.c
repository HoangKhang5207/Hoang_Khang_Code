#include <stdio.h>
#include <math.h>
#define MAX 50
int i;
void In_Array(int a[], int n) {
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);  
    }
}
void Out_Array(int a[], int n) {
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);
}
int CheckChinhPhuong(float a) {
    if (sqrt(a) == (int)(sqrt(a)))
        return 1;
    else
        return 0;
}
int TimChinhPhuongDauTien(int a[], int n) {
    for (i = 0; i < n; i++) {
        if (CheckChinhPhuong(a[i]) == 1)
            return a[i];
    }
    return -1;
}
int main() {
    int a[MAX], n;
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
        if (n <= 0 || n > MAX)
            printf("Nhap so luong phan tu khong hop le, hay nhap lai (n > 0, n <= 50).\n");
    } while (n <= 0 || n > MAX);
    In_Array(a, n);
    printf("Mang a gom:");
    Out_Array(a, n);
    printf("\nSo chinh phuong dau tien trong mang la: %d.", TimChinhPhuongDauTien(a, n));
    return 0;
}