#include<stdio.h>
#include<math.h>
int main(){
	int num,count=0,sum=0;
	printf("Keerthi - 192211433\n\n");
	printf("Enter a number: ");
	scanf("%d",&num);
	int onum=num;
	int temp=num;
	while(temp>0){
		temp/=10;
		count++;
	}
	temp=num;
	while(temp!=0){
		int d=temp%10;
		sum+=pow(d,count);
		temp/=10;
	}
	if(sum==onum){
		printf("%d is a Armstrong Number",onum);
	}else{
		printf("%d is not a Armstrong number",onum);
	}
	return 0;
}
