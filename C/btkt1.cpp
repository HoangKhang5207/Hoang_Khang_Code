#include <stdio.h>
#include <math.h>
#define MAX 50
#define PI 3.14
void menu();
void menu5();
void nhap_r_and_h(float &r, float &h);
float dientichday(float &r, float &h);
float dientichxq(float &r, float &h);
float thetich(float &r, float &h);
void checksole(int n);
void dtb(float dkt, float dgk, float dck);
void in_array(int a[], int &n);
void out_array(int a[], int n);
void xoa1so(int a[], int &n, int vitrixoa);
void xoasochan(int a[], int &n);
int tim_min(int a[], int n);
int timvitrimin(int a[], int n);
int timsole_max(int a[], int n);
int main() {
    int a[MAX], n = 0, chon, x;
    float r, h, kt, gk, ck;
    char choose;
    do {
        menu();
        printf("Moi ban chon cac lua chon tuong ung tren: ");
        scanf("%d", &chon);
        switch (chon) {
        case 0:
            printf("\n");
            printf("Ket thuc chuong trinh. Moi ban nhap phim Enter!");
            exit(1);
            break;
        case 1:
            printf("\n");
            printf("Ban da chon chuc nang 1.\n");
            printf("Menu cua ban da duoc hoan thanh.\n");
            break;
        case 2:
            printf("\n");
            printf("Ban da chon chuc nang 2.\n");
            nhap_r_and_h(r, h);
            printf("Dien tich day cua hinh tru = %.2f.\n", dientichday(r, h));
            printf("Dien tich xung quanh cua hinh tru = %.2f.\n", dientichxq(r, h));
            printf("The tich cua hinh tru = %.2f.", thetich(r, h));
            break;
        case 3:
            printf("\n");
            printf("Ban da chon chuc nang 3.\n");
            do {
                printf("Moi ban nhap vao so nguyen duong n: ");
                scanf("%d", &x);
                if (x <= 0)
                    printf("Nhap khong hop le, hay nhap lai (n > 0).\n");
            } while (x <= 0);
            checksole(x);
            break;
        case 4:
            printf("\n");
            printf("Ban da chon chuc nang 4.\n");
            printf("Nhap diem bai kiem tra: ");
            scanf("%f", &kt);
            printf("Nhap diem bai giua ky: ");
            scanf("%f", &gk);
            printf("Nhap diem bai cuoi ky: ");
            scanf("%f", &ck);
            dtb(kt, gk, ck);
            break;
        case 5:
            printf("\n");
            printf("Ban da chon chuc nang 5.\n");
            do {
                menu5();
                printf("Moi ban chon cac chuc nang tuong ung tren: ");
                fflush(stdin);
                scanf("%c", &choose);
                switch (choose) {
                case 'a':
                    printf("\n");
                    printf("Ban da chon cau a.\n");
                    in_array(a, n);
                    printf("Mang a gom:\n");
                    out_array(a, n);
                    break;
                case 'b':
                    printf("\n");
                    printf("Ban da chon cau b.\n");
                    if (n == 0)
                        printf("Ban phai thuc hien cau a truoc, hay tao mang.");
                    else {
                        printf("Mang a gom:\n");
                        out_array(a, n);
                        xoasochan(a, n);
                        printf("\nMang sau khi xoa cac phan tu chan:\n");
                        out_array(a, n);
                    }
                    break;
                case 'c':
                    printf("\n");
                    printf("Ban da chon cau c.\n");
                    if (n == 0)
                        printf("Ban phai thuc hien cau a truoc, hay tao mang.");
                    else {

                    }
                    break;
                case 'd':
                    printf("\n");
                    printf("Ban da chon cau d.\n");
                    if (n == 0)
                        printf("Ban phai thuc hien cau a truoc, hay tao mang.");
                    else {
                        printf("Mang a gom:\n");
                        out_array(a, n);
                        printf("\nGTNN trong mang la: %d.\n", tim_min(a, n));
                        printf("Vi tri cua gia tri nho nhat trong mang la: %d.", timvitrimin(a, n));
                    }
                    break;
                case 'e':
                    printf("\n");
                    printf("Ban da chon cau e.\n");
                    if (n == 0)
                        printf("Ban phai thuc hien cau a truoc, hay tao mang.");
                    else {
                        printf("Mang a gom:\n");
                        out_array(a, n);
                        printf("\nSo le lon nhat trong mang la: %d.", timsole_max(a, n));
                    }
                    break;
                }
            } while (choose == 'a' || choose == 'b' || choose == 'c' || choose == 'd' || choose == 'e');
            break;
        default:
            printf("Ban da nhap sai, vui long nhap lai lua chon.");
        } 
    } while (chon != 0);
    return 0;
}
void menu() {
    printf("\nMENU CHUONG TRINH\n");
    printf("0. Ket thuc chuong trinh.\n");
    printf("1. Tao menu.\n");
    printf("2. Tinh dien tich day, dien tich xung quanh va the tich cua hinh tru tron.\n");
    printf("3. Kiem tra mot so nguyen duong n co cac chu so la le hay khong.\n");
    printf("4. Tinh diem trung binh va xet xep hang cua hoc sinh dua vao diem bai ktra, diem thi giua ky va diem thi cuoi ky.\n");
    printf("5. Cho mang 1 chieu a chua n phan tu, thuc hien cac ham sau:\n");
}
void menu5() {
    printf("\nMenu cau 5:\n");
    printf("a. Viet ham nhap xuat mang a.\n");
    printf("b. Xoa cac phan tu chan.\n");
    printf("c. Viet ham xuat cac phan tu chan o sau so lon nhat cua mang.\n");
    printf("d. Viet ham tim vi tri cua phan tu co GTNN tren mang.\n");
    printf("e. Viet ham tim so le lon nhat tren mang. Neu khong co so le nao tren mang thi tra ve 0.\n");
    printf("Nhap mot ky tu khac de ket thuc chuong trinh.\n");
}
void nhap_r_and_h(float &r, float &h) {
    printf("Moi ban nhap ban kinh r: ");
    scanf("%f", &r);
    printf("Moi ban nhap chieu cao h: ");
    scanf("%f", &h);
}
float dientichday(float &r, float &h) {
    float S_day = 2 * PI * pow(r, 2);
    return S_day;
}
float dientichxq(float &r, float &h) {
    float S_xq = 2 * PI * r * h;
    return S_xq;
}
float thetich(float &r, float &h) {
    float V = PI * pow(r, 2) * h;
    return V;
}
void checksole(int n) {
    int temp, check = 1;
    printf("\nSo nguyen %d co toan chu so le hay khong?", n);
    while (n > 0) {
        temp = n % 10;
        if (temp % 2 == 0) {
            check = 0;
            break;
        }
        n /= 10;
    }
    if (check == 1)
        printf("\nTrue.");
    else
        printf("\nFalse.");
}
void dtb(float dkt, float dgk, float dck) {
    float DTB = ((dkt * 1) + (dgk * 2) + (dck * 3)) / 6;
    printf("Diem trung binh = %.1f.\n", DTB);
    if (DTB >= 9.0)
        printf("Xep hang A.\n");
    else if (DTB >= 7.0 && DTB < 9.0)
        printf("Xep hang B.\n");
    else if (DTB >= 5.0 && DTB < 7.0)
        printf("Xep hang C.\n");
    else
        printf("Xep hang F.\n");
}
void in_array(int a[], int &n) {
    do {
        printf("Moi ban nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
        if (n <= 0 ||n > MAX)
            printf("Ban hay nhap lai (n > 0 va n <= 50).\n");
    } while (n <= 0 || n > MAX);
    for (int i = 0; i < n; i++) {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
}
void out_array(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%8d", a[i]);
}
void xoa1so(int a[], int &n, int vitrixoa) {
    for (int i = vitrixoa; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}
void xoasochan(int a[], int &n) {
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0) {
            xoa1so(a, n, i);
            i--;
        }
}
int tim_min(int a[], int n) {
    int Min = a[0];
    for (int i = 0; i < n; i++)
        if (Min > a[i])
            Min = a[i];
    return Min;
}
int timvitrimin(int a[], int n) {
    int i, vtmin = 0, Min = a[0];
    for (i = 0; i < n; i++)
        if (Min > a[i]) { 
            Min = a[i];
            vtmin = i + 1;
        }
        return vtmin;
}
int timsole_max(int a[], int n) {
    int Max = a[0], check = 0;
    for (int i = 0; i < n; i++)
        if (Max < a[i] && a[i] % 2 != 0) {
            Max = a[i];
            check = 1;
        }
    if (check == 1)
        return Max;
    else 
        return 0;
}
