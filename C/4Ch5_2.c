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
void XuatSoChan(int a[ROW][COL], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            if (a[i][j] % 2 == 0)
                printf("%5d", a[i][j]);
    }
}
void XuatSoLe(int a[ROW][COL], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) 
            if (a[i][j] % 2 != 0)
                printf("%5d", a[i][j]);
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
    printf("Cac so le trong Mang a:\n");
    XuatSoLe(a, m, n);
    printf("\nCac so chan trong Mang a:\n");
    XuatSoChan(a, m, n);
    return 0;
}