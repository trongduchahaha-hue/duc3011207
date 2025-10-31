#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    int matran[10][10];

    printf("Nhap so hang: ");
    scanf("%d", &a);
    printf("Nhap so cot: ");
    scanf("%d", &b);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Nhap phan tu tai hang %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &matran[i][j]);
        }
    }
    printf("\nMa tran vua nhap la:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d\t", matran[i][j]);
        }
        printf("\n");
    }

    return 0;
}

