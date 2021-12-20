#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 50
#define COL 50
void In_Array2(int a[ROW][COL], int m, int n) {
    srand(time(NULL));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 100;
}
void Out_Array2(int a[ROW][COL], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
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
    In_Array2(a, m, n);
    printf("Mang 2 chieu a gom:\n");
    Out_Array2(a, m, n);
    return 0;
}