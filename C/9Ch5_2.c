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
int Find_Max(int a[ROW][COL], int m, int n) {
    int Max = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (Max < a[i][j])
                Max = a[i][j];
    return Max;
}
int Find_Min(int a[ROW][COL], int m, int n) {
    int Min = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (Min > a[i][j])
                Min = a[i][j];
    return Min;
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
    printf("Gia tri MAX trong mang la: %d.\n", Find_Max(a, m, n));
    printf("Gia tri MIN trong mang la: %d.", Find_Min(a, m, n));
    return 0;
}
