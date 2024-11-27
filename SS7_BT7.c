#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    printf("Nhap cac phan tu la so le\n");
    int i;
    for(i = 0;i < n;i++){
        printf("Phan tu %d: ",i + 1);
        scanf("%d", &array[i]);
        if(array[i] % 2 == 0){
        	printf("Hay nhap so le!\n");
        	i--;
		}
    }
    printf("Cac phan tu cua mang la: ");
    for(i = 0;i <n;i++){
        printf("%d ", array[i]);
    }
    return 0;
}
