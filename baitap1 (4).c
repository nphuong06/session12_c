#include<stdio.h>
int sum(int num1, int num2){
	printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
	return num1 + num2;
}
int main(){
	int num1, num2;
	printf("Nhap so thu nhat: ");
	scanf("%d", &num1);
	printf("\nNhap so thu hai: ");
	scanf("%d", &num2);
	return sum(num1, num2);
}
