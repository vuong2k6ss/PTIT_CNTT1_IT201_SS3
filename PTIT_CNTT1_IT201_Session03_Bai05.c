#include <stdio.h>
#include <stdlib.h>

int tongCheoChinh( int x, int y, int arr[x][y] ){
    if (x != y) {
        printf("khong ton tai duong cheo chinh");
        return 1;
    }
    int sum = 0;
    for (int i = 0; i < x; i++) {
        sum += arr[i][i];
    }
    return sum;
}

int tongCheoPhu( int x, int y, int arr[x][y]){
    if (x != y) {
        printf("khong ton tai duong cheo phu");
        return 1;
    }
    int sum = 0;
    for (int i = 0; i < x; i++) {
        sum += arr[x-1-i][i];
    }
    return sum;
}


int main() {
    int x, y;
    printf("nhap so hang(rows): ");
    scanf("%d", &x);
    printf("nhap so cot(rows): ");
    scanf("%d", &y);
    if (x <= 0 || y <= 0 || x>1000 || y>1000) {
        printf("so hang va so cot khong hop le");
        return 1;
    }
    int arr[x][y];

    printf("nhap phan tu cho mang: \n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("arr[%d][%d]= \t", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int a = tongCheoChinh(x, y, arr);
    int b = tongCheoPhu(x, y, arr);
    printf("tong duong cheo chinh: %d\n", a);
    printf("tong duong cheo phu: %d", b);

    return 0;
}