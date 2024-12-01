#include<stdio.h>
int main(){
	int a[100];
	int choice,n,pos,value;
	do {
		printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
        	case 1:
        		printf("Nhap kich thuong cua mang: ");
        		scanf("%d",&n);
        		printf("Nhap cac phan tu: ");
        		for(int i = 0; i<n; i++){
        			printf("a[%d]=", i);
        			scanf("%d",&a[i]);
			}
			   printf("\n");
			   break;
		    case 2:
		    	for(int i = 0; i<n; i++){
			    printf("a[%d]=%d\n", i,a[i]);
		    }
		        break;
			case 3:
                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                printf("Nhap vi tri muon them: ");
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                printf("Vi tri them khong hop le!\n");
            } else {
                 for (int i = n; i > pos; i--) {
                a[i] = a[i - 1];
            }
			}
                a[pos] = value;
                n++;
                break;
		    case 4:
                printf("Nhap vi tri can sua: ");
                scanf("%d", &pos);
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                if (pos < 0 || pos >= n) {
                 printf("Vi tri khong hop le!\n");
            } else {
                 a[pos] = value;
            }
				break;
			case 5:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                printf("Vi tri khong hop le!\n");
            } else {
                 for (int i = pos; i < n - 1; i++) {
                 a[i] = a[i + 1];
            }
            }
                n--;
                break;
			case 6:
			    printf("Chuong trinh ket thuc!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
	} while (choice != 6);
	return 0;	      
}
