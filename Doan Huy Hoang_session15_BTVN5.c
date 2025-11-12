#include <stdio.h>

void phanTuNhieuNhat(int a[], int n, int *phanTu, int *soLan) {
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            *phanTu = a[i];
        }
    }

    *soLan = maxCount;
}

int main() {
    int a[100], n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int giaTri, soLan;
    phanTuNhieuNhat(a, n, &giaTri, &soLan);

    printf("Phan tu xuat hien nhieu nhat la: %d\n"

