 #include <stdio.h>

int xoaTrungLap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (a[j] == a[i]) {
                
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--; 
            } else {
                j++; 
            }
        }
    }
    return n; 
}

int main() {
    int a[100], n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    n = xoaTrungLap(a, n);

    printf("Mang sau khi loai bo trung lap:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nKich thuoc moi cua mang: %d\n", n);

    return 0;
}

