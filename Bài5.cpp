#include<stdio.h>
int main(){
	int a[100];
	int choice,n,pos,value,sum,min,max,x,count;
	do{
		printf("MENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
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
				sum=0;
			    printf("Cac phan tu chan la: ");
                for (int i = 0; i < n; i++) {
                 if (a[i] % 2 == 0) {
                  printf("%d ", a[i]);
                  sum += a[i];
            }
            }
                printf("Tong cac phan tu chan la: %d\n", sum);
                break;
            case 4:    
                max = a[0];
                min = a[0];
               for (int i = 1; i < n; i++) {
                 if (a[i] > max) {
                 max = a[i];
            }
               if (a[i] < min) {
                 min = a[i];
            }
            }
               printf("Gia tri lon nhat la: %d\n", max);
               printf("Gia tri nho nhat la: %d\n", min);
               break;
            case 5:
            	sum=0;
			    printf("Cac phan tu la so nguyen to trong mang la: \n");
        	    for(int i=0;i<n;i++){
				if(a[i]<10){
			        switch(a[i]){
			        	case 1:
			        	case 2:
			        	case 3:
			        	case 5:
			        	case 7:
			        		printf("a[%d]=%d\n",i,a[i]);
			        	    sum=sum+a[i];
						break;
			        }	
			    }else if(a[i]%2!=0&&a[i]%3!=0&&a[i]%5!=0&&a[i]%7!=0){
			    	printf("a[%d]=%d\n",i,a[i]);
			        sum=sum+a[i];
				}
			    }
			    printf("Tong cac phan tu la so nguyen to trong mang la: %d",sum);
			    printf("\n");
                break;
                case 6:
                	count=0;
			    printf("Nhap mot so: ");
		        scanf("%d",&x);
			    for(int i=0;i<n;i++){
		    	if(a[i]==x){
		    	    count=count+1;
			    }
			    }
	            if(!count){
	            printf("Khong co phan tu nay trong mang\n");
			    }
			    printf("So phan tu giong %d la: %d",x,count);
                printf("\n");
		        break;
		        case 7:
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
                case 8:
                	printf("Chuong trinh ket thuc!\n");
                break;
                default:
                printf("Lua chon khong hop le!\n");
        }
	} while (choice!=8);
	return 0;
}
