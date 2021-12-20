#include <stdio.h>

void Xuatso(int tong, int tich);

int main() {
    int S, T;
    Xuatso(S, T);
    return 0;
}

void Xuatso(int tong, int tich) {
    tong = 0;
    tich = 1;
    printf("Cac so co 3 chu so va tong cac chu so bang tich cac chu so: \n");
    for (int i = 1; i <= 999; i++) {
        int hdv = i % 10;
        int hc = (i / 10) % 10;
        int ht = i / 100;
        tong = tong + hdv + hc + ht;
        tich = tich * hdv * hc * ht;
        if (tong == tich)
            printf("%d\t", i);
    }
}