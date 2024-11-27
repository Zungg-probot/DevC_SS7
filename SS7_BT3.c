#include<stdio.h>
int main(){
	int array[5]={1,3,7,7,5};
	int i,soChan=0,chan;
	for(i=0;i<sizeof(array)/sizeof(array[0]);i++){
		if(array[i] % 2 == 0){
			chan = array[i];
			printf("%d ",chan);
			soChan++;
		}
		}
	if(soChan == 0){
		printf("Khong co so chan nao");
	}
}

