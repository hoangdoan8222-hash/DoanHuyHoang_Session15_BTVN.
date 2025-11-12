#include <stdio.h>

int hieu(int a, int b) {
    return a - b;
}

int tich(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    printf("Nhap hai so nguyen: ");
    scanf("%d%d", &x, &y);

    printf("Hieu cua %d va %d la: %d\n", x, y, hieu(x, y));
    printf("Tich cua %d va %d la: %d\n", x, y, tich(x, y));

    return 0;
}

