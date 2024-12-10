#include<stdio.h>
#include<math.h>
int isPrime(int num){
	int count = 0;
	for(int i = 2; i < sqrt(num); i++){
		if(num % i ==0){
			count++;
		}
	}
	if(count == 0){
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
	if(isPrime(num1) == 0){
		printf("\n%d la so nguyen to\n", num1);
	}
	else{
		printf("\n%d khong la so nguyen to\n", num1);
	}
	if(isPrime(num2) == 0){
		printf("\n%d la so nguyen to\n", num2);
	}
	else{
		printf("\n%d khong la so nguyen to\n", num2);
	}
	return 0;
}
