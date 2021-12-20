#include <stdio.h>

void Time(int t);

int main() {
    int T;
    printf("Nhap giay T = ");
    scanf("%d", &T);
    Time(T);
    return 0;
}

void Time(int t) {
    int hour = t / 3600;
    int minute = (t % 3600) / 60;
    int second = (t % 3600) % 60;
    printf("T = %d giay --> %dh : %dm : %ds.", t, hour, minute, second);
}
