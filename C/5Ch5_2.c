#include <stdio.h>
#define ROW 50
#define COL 50
int i, j;
void In_Array2(int a[ROW][COL],int m, int n) {
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
}
void Out_Array2(int a[ROW][COL], int m, int n) {
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
void ROW_SoChan(int a[ROW][COL], int m, int n, int k) {
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (i == k && a[i][j] % 2 == 0)
                printf("%5d", a[i][j]);
}
void COL_SoLe(int a[ROW][COL], int m, int n, int k) {
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (j == k && a[i][j] % 2 != 0)
                printf("%5d", a[i][j]);
}
int main() {
    int a[ROW][COL], m, n, d, c;
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
    printf("Mang a gom:\n");
    Out_Array2(a, m, n);
    printf("Nhap so dong k: ");
    scanf("%d", &d);
    printf("Nhap so cot k: ");
    scanf("%d", &c);
    printf("Cac so chan cua dong %d gom:", d);
    ROW_SoChan(a, m, n, d);
    printf("\nCac so le cua cot %d gom:", c);
    COL_SoLe(a, m, n, c);
    return 0;
}