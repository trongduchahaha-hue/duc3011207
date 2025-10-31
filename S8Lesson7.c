#include <stdio.h>

int main() {
    int n, i;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);

        while (arr[i] % 2 == 0) {
            printf("Phai la so le! Nhap lai a[%d]: ", i);
            scanf("%d", &arr[i]);
        }
    }

    printf("\nMang so le vua nhap: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

