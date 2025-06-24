#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;
    printf("nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("so luong phan tu khong hop le");
        return 1;
    }
    //cap phat bo nho
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    printf("nhap phan tu cho mang: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("max = %d\n", max);

    free(arr);
    return 0;
}