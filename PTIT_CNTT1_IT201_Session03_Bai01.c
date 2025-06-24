#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;
    printf("nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("so luong phan tu khong duoc am");
        return 1;
    }else if(n == 0){
        printf("so luong phan tu phai lon hon 0");
        return 1;
    }
    //cap phat bo nhoâr
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    printf("nhap phan tu cho mang: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("so thu %d = %d", i+1, arr[i]);
    }
    free(arr);
    return 0;
}