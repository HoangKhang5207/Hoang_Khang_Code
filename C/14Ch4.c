#include <stdio.h>

void Xuatso(int hdv, int hc, int ht);

int main() {
    int dv, c, t;
    printf("Cac so co 3 chu so khac nhau la: \n");
    Xuatso(dv, c, t);
    return 0;
}

void Xuatso(int hdv, int hc, int ht) {
    for (int i = 100; i <= 999; i++) {
        hdv = i % 10;
        hc = (i / 10) % 10;
        ht = i / 100;
        if (hdv != hc && hc != ht && ht != hdv)
            printf("%d\t", i);
    }
}