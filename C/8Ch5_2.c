#include <stdio.h>
#define ROW 50
#define COL 50
int i, j;
void In_Array2(int a[ROW][COL], int m, int n) {
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
    }
}
void Out_Array2(int a[ROW][COL], int m, int n) {
    for (i = 0; i < m ; i++) {
        for (j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
int XuatTich(int a[ROW][COL], int m, int n) {
    int Multi = 1;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
        Multi = Multi * a[i][j];
        printf("Tich cac phan tu tren dong %d = %d.\n", i, Multi);
        Multi = 1;
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
    printf("Mang a gom:\n");
    Out_Array2(a, m, n);
    XuatTich(a, m, n);
    return 0;
}