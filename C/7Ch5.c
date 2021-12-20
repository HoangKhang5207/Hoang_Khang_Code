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
    for (i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }
}
void TimDoan(int a[], int n) {
    int Max = a[0];
    int Min = a[0];
    for (i = 1; i < n; i++) {
        Max = (a[i] > Max) ? a[i] : Max;
        Min = (a[i] < Min) ? a[i] : Min;
    }
    printf("\n[%d, %d] la doan chua tat cac gia tri cua mang.", Min, Max);
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
    TimDoan(a, n);
    return 0;
}