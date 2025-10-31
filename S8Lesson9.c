#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    printf("Nhap so hang: ");
    scanf("%d", &a);
    printf("Nhap so cot: ");
    scanf("%d", &b);

    int matrix[10][10];

    printf("Nhap cac phan tu cua ma tran:\n");
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            printf("Nhap phan tu tai hang %d, cot %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nCac phan tu tren duong bien cua ma tran la:\n");
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(i == 0 || i == a-1 || j == 0 || j == b-1) {
                printf("%d\t", matrix[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}

