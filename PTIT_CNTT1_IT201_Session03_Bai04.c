#include <stdio.h>
#include <stdlib.h>

int Max( int x, int y, int arr[x][y] ){
    int max = arr[0][0];
    for(int i = 0; i <x; i++){
        for(int j = 0; j <y; j++){
            if(arr[i][j] > max){
            max = arr[i][j];
            }
        }
    }
    return max;
}

int Min( int x, int y, int arr[x][y]){
    int min = arr[0][0];
    for(int i = 0; i <x ;i++){
        for(int j = 0; j <y; j++){
            if(arr[i][j] < min){
            min = arr[i][j];
            }
        }
    }
    return min;
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
    int max = Max( x, y, arr);
    int min = Min( x, y, arr);
    printf("max = %d\n", max);
    printf("min = %d\n", min);


    return 0;
}