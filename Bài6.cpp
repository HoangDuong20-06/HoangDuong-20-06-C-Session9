#include<stdio.h>
int main(){
	int choice,sum,m,n,result,max_sum,max_n;
	int a[100][100];
	do{
		printf("MENU\n");
        printf("1. Nhap kick co va gia tri cua cac phan tu cua mang\n");
        printf("2. In ra cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
        	case 1:
        		printf("Nhap so hang cua ma tran: ");
                scanf("%d", &m);
                printf("Nhap so cot cua ma tran: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cua ma tran:\n");
                for (int i = 0; i < m; i++) {
                	for (int j = 0; j < n; j++) {
                		printf("a[%d][%d]=: ", i, j);
                        scanf("%d", &a[i][j]);
                    }
                }
			    break;
		    case 2:
                for (int i = 0; i < m; i++) {
                	for (int j = 0; j < n; j++) {
                		printf("%d ", a[i][j]);
                    }
                    printf("\n");
                }
		        break;
			case 3:
				sum=0;
			    printf("Cac phan tu le la: ");
                for (int i = 0; i < m; i++) {
                	for (int j = 0; j < n; j++) {
                		if (a[i][j] % 2 != 0) {
                			printf("%d ", a[i][j]);
                            sum += a[i][j];
                        }
                    }
            }
                printf("Tong cac phan tu le la: %d\n", sum);
                break;
            case 4: 
			    result =1;   
                printf("Cac phan tu nam tren duong bien la: \n");
                for (int i = 0; i < m; i++) {
                	for (int j = 0; j < n; j++) {
                		if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                			printf("%2d ", a[i][j]);
                            result  *= a[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien la: %d\n", result);
                break;
            case 5:
            	printf("Cac phan tu tren duong cheo chinh la: \n");
                for (int i = 0; i < m; i++) {
                	printf("%d\n", a[i][i]);
                }
                break;
            case 6:
                printf("Cac phan tu tren duong cheo phu la: \n");
                for (int i = 0; i < m; i++) {
                	printf("%d\n", a[i][n - i - 1]);
                }
		        break;
		    case 7:
                max_n = 0;
                max_sum = 0;
                for(int i=0; i<m; i++) {
                    sum = 0;
                    for(int j=0; j<n; j++) {
                        sum += a[i][j];
                    }
                    if(sum > max_sum) {
                        max_sum = sum;
                        max_n = i;
                    }
                }
                printf("Dong co tong gia tri lon nhat la: ");
                for (int j = 0; j < n; j++) {
                    printf("%d ", a[max_n][j]);
                }
                printf("\nTong cua dong nay: %d\n", max_sum);
                break;
            case 8:
                printf("Chuong trinh ket thuc!\n");
                break;
                default:
                printf("Lua chon khong hop le!\n");
        }
	} while (choice!=8);
	return 0;
}
