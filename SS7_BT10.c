#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    printf("Nhap cac phan tu\n");
    int i;
    for(i = 0;i < n;i++){
        printf("Phan tu %d: ",i + 1);
        scanf("%d", &array[i]);
    }
    printf("Cac phan tu chi gom so nguyen to: ");
    for(i = 0;i <n;i++){
        if (array[i] <= 1){
    } else if (array[i] == 2){
        printf("%d",array[i]);
    } else {
    	int a;
        for (a = 2; a * a <= array[i]; a++){
            if (array[i] % a == 0){
                continue;
            }
            printf("%d",array[i]);
        }
    }

    }
    return 0;
}
