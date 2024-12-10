#include<stdio.h>
int findMax(int arr[]){
	int max = arr[0];
	for(int i = 1; i < 5; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("Phan tu lon nhat trong mang la: %d", max);
	return max;
}
int main(){
	int arr[5] = {1,3,10,4,2};
	return findMax(arr);
}
