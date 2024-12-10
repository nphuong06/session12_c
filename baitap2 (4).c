#include<stdio.h>
void inMang(int arr[]){
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	int arr[5] = {1,2,3,4,5};
	inMang(arr);
	return 0;
}
