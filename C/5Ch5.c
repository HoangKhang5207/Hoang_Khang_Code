#include <stdio.h>
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
        printf("%5d", a[i]);
}
int TimMin(int a[], int n) {
    int Min = a[0];
    for (i = n - 1; i >= 1; i--) {
        if (Min > a[i])
            Min = a[i];
    }
    return Min;
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
    printf("\nGia tri nho nhat trong mang la: %d.", TimMin(a, n));
    return 0;
}