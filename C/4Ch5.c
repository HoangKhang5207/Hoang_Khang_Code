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
void TimvitriAm(int a[], int n) {
    for (i = 0; i < n; i++) {
        if (a[i] < 0)
            printf("a[%d]\t", i);
    }
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
    printf("\nCac vi tri ma tai do gia tri la so am gom:\n");
    TimvitriAm(a, n);    
    return 0;
}