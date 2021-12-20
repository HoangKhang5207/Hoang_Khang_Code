#include <stdio.h>

int USN(int n);

int main() {
    int N;
    printf("Nhap so nguyen N: ");
    scanf("%d", &N);
    USN(N);
    return 0;
}

int USN(int n) {
    int i, uocso = 0, dem = 0;
    printf("%d co cac uoc so la: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d  ", i);
            dem++;
            uocso = 1;
        }
    }
    if (uocso == 1)
        printf("\n%d co tong cong %d uoc so.", n, dem);
    return 1;
}