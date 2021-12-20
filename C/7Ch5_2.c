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
int S_ROW_Odd(int a[ROW][COL], int m, int n) {
    int Sum = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] % 2 == 0 && i % 2 != 0)
                Sum = Sum + a[i][j];
    return Sum;
}
int S_COL_Even(int a[ROW][COL], int m, int n) {
    int Sum = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] % 2 == 0 && j % 2 == 0)
                Sum = Sum + a[i][j];
    return Sum;
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
    printf("Tong cac so chan thuoc dong le = %d.\n", S_ROW_Odd(a, m, n));
    printf("Tong cac so chan thuoc cot chan = %d.", S_COL_Even(a, m, n));
    return 0;
}