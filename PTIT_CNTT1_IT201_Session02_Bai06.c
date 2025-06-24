#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int *arr = NULL;

    // Nhập số lượng phần tử n
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000)
    {
        printf("So luong phan tu khong hop le.\n");
        return 1; // Kết thúc chương trình nếu n không hợp lệ
    }

    // Cấp phát bộ nhớ cho n phần tử
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Khong the cap phat bo nho.\n");
        return 1; // Kết thúc chương trình nếu không thể cấp phát bộ nhớ
    }

    // Nhập n phần tử
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Nhập số lượng phần tử m cần thêm
    printf("Nhap so luong phan tu can them m: ");
    scanf("%d", &m);

    if (m > 0)
    {
        // Cấp phát bộ nhớ cho n + m phần tử
        int *temp = (int *)realloc(arr, (n + m) * sizeof(int));
        if (temp == NULL)
        {
            printf("Khong the cap phat bo nho moi.\n");
            free(arr); // Giải phóng bộ nhớ đã cấp phát trước đó
            return 1;  // Kết thúc chương trình nếu không thể cấp phát bộ nhớ
        }
        arr = temp; // Cập nhật con trỏ arr

        // Nhập m phần tử mới
        printf("Nhap %d phan tu moi:\n", m);
        for (int i = n; i < n + m; i++)
        {
            scanf("%d", &arr[i]);
        }

        n += m; // Cập nhật số lượng phần tử mới
    }
    // In mảng kết quả
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("]\n");

    // Giải phóng bộ nhớ
    free(arr);
    return 0;
}