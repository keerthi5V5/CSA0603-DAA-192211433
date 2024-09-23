#include<stdio.h>
int main(){
	int n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	int fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("Factorial of %d = %d",n,fact);
	return 0;
}
