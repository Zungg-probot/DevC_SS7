#include<stdio.h>
int main(){
	int array[5]={1,6,3,2,7};
	int i,n = sizeof(array)/sizeof(array[0]);
	printf("Mang co do dai la %d\n",n);
	for(i = 0;i < n;i++){
		printf("%d\n",array[i]);
	}
}
