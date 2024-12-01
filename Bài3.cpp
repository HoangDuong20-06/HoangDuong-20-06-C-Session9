#include <stdio.h>
int main() {
    int a[100];
    int n;
    // Nhap so luong phan tu
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    // Nhap gia tri cho cac phan tu
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Nhap vi tri can xoa
    int pos;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &pos);
    // Kiem tra vi tri
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
    } else {
        // Xoa phan tu
        for (int i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        // Giam so luong phan tu
        n--;
        // In mang sau khi xaa
        printf("Mang sau khi xoa:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
