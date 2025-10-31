#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0)
            return 0;
    }
    return 1; 
}
int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nCac phan tu la so nguyen to trong mang:\n");
    for(int i = 0; i < n; i++) {
        if(isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

