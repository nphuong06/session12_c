#include<stdio.h>
int isPerfectNumber(int num){
	int sum = 0;
	for(int i = 1; i < num; i++){
		if(num % i == 0){
			sum += i;
		}
	}
	if(sum == num){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int num1, num2;
	printf("Nhap so thu nhat: ");
	scanf("%d", &num1);
	printf("\nNhap so thu hai: ");
	scanf("%d", &num2);
	if(isPerfectNumber(num1) == 1){
		printf("\n%d la so hoan hao\n", num1);
	}
	else{
		printf("\n%d khong la so hoan hao\n", num1);
	}
	if(isPerfectNumber(num2) == 1){
		printf("\n%d la so hoan hao\n", num2);
	}
	else{
		printf("\n%d khong la so hoan hao\n", num2);
	}
	return 0;
}
