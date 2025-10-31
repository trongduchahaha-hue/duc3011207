#include <stdio.h>
#include <math.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0)
            printf("Sochan %d\n", arr[i] + 3);

        if (arr[i] % 3 == 0)
            printf("Sole %d\n", arr[i] + 2);
    }

    return 0;
}

