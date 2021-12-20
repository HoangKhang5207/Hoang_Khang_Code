#include <stdio.h>
#include <math.h>

void Sochinhphuong(int a);

int main() {
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    Sochinhphuong(x);
    return 0;
}

void Sochinhphuong(int a) {
    int Num = sqrt(a);
    if (pow(Num, 2) == a)
        printf("%d la so chinh phuong", a);
    else
        printf("%d khong phai la so chinh phuong", a);
}