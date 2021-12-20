#include <stdio.h>

void Date(int day);

int main() {
    int N;
    printf("Nhap so ngay N: ");
    scanf("%d", &N);
    Date(N);
    return 0;
}

void Date(int day) {
    int Week = day / 7;
    int OddDay = day % (Week * 7);
    printf("N = %d, co %d tuan va %d ngay le.", day, Week, OddDay);
}

