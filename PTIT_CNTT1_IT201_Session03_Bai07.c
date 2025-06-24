#include <stdio.h>
#include <stdlib.h>

void import_elemt(int** arr,int r,int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Nhap vao vi tri hang thu %d, cot thu %d:  ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int sum_row(int** arr, int k, int c) {
    int sum = 0;
    for (int i = 0; i < c; i++) {
        sum += arr[k-1][i];
    }
    return sum;
}

int main() {
    int rows, cols;
    printf("Nhap vao so luong hang: ");
    scanf("%d", &rows);
    printf("Nhap vao so luong cot: ");
    scanf("%d", &cols);
    int** arr = (int **)calloc(rows, sizeof (int*));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)calloc(cols, sizeof (int));
    }

    if (rows <= 0 && cols <= 0) {
        printf("So hang va cot khong hop le!\n");
        return 1;
    } else if (rows <= 0) {
        printf("So hang khong hop le!\n");
        return 1;
    } else if (cols <= 0) {
        printf("So cot khong hop le!\n");
        return 1;
    }

    import_elemt(arr,rows,cols);

    int k;
    printf("Nhap vao hang muon lua chon: ");
    scanf("%d", &k);


    if (k > rows) {
        printf("Hang tinh khong ton tai\n");
        return 1;
    } else if (k <= 0) {
        printf("So hang khong hop le\n");
        return 1;
    }

    printf("Sum = %d",sum_row(arr,k,cols));

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}