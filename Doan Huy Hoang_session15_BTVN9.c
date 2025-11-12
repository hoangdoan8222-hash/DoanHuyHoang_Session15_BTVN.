#include <stdio.h>

int phanTuItNhat(int a[], int n) {
    int minCount = n + 1;  
    int phanTu = a[0];     

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[j] == a[i])
                count++;
        }

        if (count < minCount) {
            minCount = count;
            phanTu = a[i];
        }
    }

    printf("Phan tu xuat hien it nhat la: %d, so lan xuat hien: %d\n", phanTu, minCount);
    return phanTu;
}

int main() {
    int a[100], n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    phanTuItNhat(a, n);

    return 0;
}

