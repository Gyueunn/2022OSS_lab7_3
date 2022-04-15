int main(){
	int num1, num2;
	int sum = 0;
	int sub = 0;
	int mul = 0;
	printf("input numbers: ");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	printf("input numbers are %d and %d\n", num1, num2);
	printf("sum is %d\n", sum);
	printf("sub is %d\n", sub);
	printf("mul is %d\n", mul);
	return 0;
}
