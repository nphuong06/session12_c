#include<stdio.h>
int giaiThua(int numbers){
	if(numbers < 0){
		printf("\nSo nay khong co giai thua\n");
		return 0;
	}
	else{
		int result = 1;
		for(int i = numbers; i > 0; i--){
			result *= i;
		}
		printf("\n%d co giai thua la: %d\n", numbers, result);
		return result;
	}
}
int main(){
	int numbers;
	printf("Nhap so can tinh giai thua: ");
	scanf("%d", &numbers);
	return giaiThua(numbers);
}
