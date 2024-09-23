#include<stdio.h>
#include<math.h>
int main(){
	int n1,n2;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&n1,&n2);
	int a=n1,b=n2;
	while(n2!=0){
		int temp=n1%n2;
		n1=n2;
		n2=temp;
	}
	printf("GCD of %d and %d is %d",a,b,n1);
	return 0;
}
