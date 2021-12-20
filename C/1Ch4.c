#include <stdio.h>

void Sochan(int x);

int main() {
    int x;
    printf("Nhap vao so nguyen: ");
    scanf("%d", &x);
    Sochan(x);
    return 0;
}

void Sochan(int x) {
    if (x % 2 == 0)
        printf("%d la so chan!", x);
    else
        printf("%d la so le!", x);
}