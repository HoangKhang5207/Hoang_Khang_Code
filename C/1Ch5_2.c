#include <stdio.h>
#define ROW 50
#define COL 50
void In_Array2(int a[ROW][COL], int m, int n) {
    for (int i = 0; i < m; i++)  
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
    }
}
void Out_Array2(int a[ROW][COL], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) 
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
void DaoCotthanhDong(int a[ROW][COL], int m, int n) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) 
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
int main() {
    int a[ROW][COL], m, n;
    do {
        printf("Nhap so dong cua mang: ");
        scanf("%d", &m);
        printf("Nhap so cot cua mang: ");
        scanf("%d", &n);
        if (ROW > 50 || COL > 50)
            printf("Nhap dong va cot khong hop le, hay nhap lai.\n");
    } while (ROW > 50 || COL > 50);
    printf("Nhap vao ma tran:\n");
    In_Array2(a, m, n);
    printf("Mang 2 chieu a gom:\n");
    Out_Array2(a, m, n);
    printf("\nDao cot thanh dong:\n");
    DaoCotthanhDong(a, m, n);
    return 0;
}