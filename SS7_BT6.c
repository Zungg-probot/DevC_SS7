#include<stdio.h>
int main(){
	int array[5]={1,2,2,7,5};
	int i;
	for(i=0;i<sizeof(array)/sizeof(array[0]);i++){
		if(array[i] % 2 == 0){
			array[i]+=3;
		}else{
			array[i]+=2;
		}
	}
	for(i=0;i<sizeof(array)/sizeof(array[0]);i++){
		printf("%d",array[i]);
}
}

