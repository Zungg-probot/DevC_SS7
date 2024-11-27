#include<stdio.h>
int main(){
	int array[5]={1,2,7,4,5};
	int i,min = 10,max = 1,chan,n=5;
	for(i=0;i<n;i++){
		if(max < array[i]){
			max = array[i];
		}else if(min > array[i]){
			min = array[i];
		}
	}
	printf("Max la: %d\n",max);
	printf("Min la: %d\n",min);
	}


