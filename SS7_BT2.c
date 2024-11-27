#include<stdio.h>
int main(){
	int array[5];
	int i,n = 5;
	for(i = 0;i < n;i++){
		printf("Nhap gia tri vao mang ");
		scanf("%d",&array[i]);
	}
	for(i = 0;i < n;i++){
	printf("%d",array[i]);
	}
	return 0;
}
