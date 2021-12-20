#include <stdio.h>

int CheckNum(int n) {
    int Sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            Sum = Sum + i;     
    }
    if (Sum == n) 
        return 1;
    return 0;
}

int main() {
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);

    if (CheckNum(x))
        printf("%d la so hoan hao", x);
    else
        printf("%d khong la so hoan hao", x);
    return 0;
}

