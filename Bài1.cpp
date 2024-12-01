#include <stdio.h>
int main() {
    int a[100];
    int n;
    // Nhap so luong phan tu
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    // Nhap gia tri cho cac phan tu
    printf("Nhap cac phan tu cua mang :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Them phan tu
    int value, pos;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them: ");
    scanf("%d", &pos);
    // Kiem tra vi tri them
    if (pos < 0 || pos > n) {
        printf("Vi tri them khong hop le!\n");
    } else {
        // Dich cac phan tu sang phai
        for (int i = n; i > pos; i--) {
            a[i] = a[i - 1];
        }
        // Them gia tri moi
        a[pos] = value;
        // Tang so luong phan tu
        n++;
        // In mang sau khi them
        printf("Mang sau khi them:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
