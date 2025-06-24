#include <stdio.h>
#include <stdlib.h>

int avg(int *arr, int n) {
    int sum = 0;
    int flag = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] % 2 == 0){
            sum += arr[i];
            flag++;
        }
    }
    return (sum / flag);
}

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
    int result = avg(arr, n);
    printf("average = %d\n", result);

    free(arr);
    return 0;
}