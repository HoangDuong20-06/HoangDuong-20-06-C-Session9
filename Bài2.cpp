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
    // Nhap vi tri can sua va gia tri moi
    int pos, value;
    printf("Nhap vi tri can sua: ");
    scanf("%d", &pos);
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    // Kiem tra vi tri
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
    } else {
        // Sua gia tri
        a[pos] = value;
        // In mang sau khi sua
        printf("Mang sau khi sua:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
