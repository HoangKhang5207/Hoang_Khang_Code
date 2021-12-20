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
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
void CheckSoChan(int a[ROW][COL], int m, int n) {
    int check = 1;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] % 2 != 0) {
                check = 0;
                break;
            }
    if (check == 1)
        printf("Ma tran a co toan la so chan.");
    else 
        printf("Ma tran a khong co toan la so chan.");
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
    CheckSoChan(a, m, n);
    return 0;
}