#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char rev[100];
	printf("Enter a String: ");
	scanf("%s",str);
	int len=strlen(str);
	rev[len]='\0';
	for(int i=0;i<=len;i++){
		rev[i]=str[i];
	}
	printf("Copy string is %s",rev);
	return 0;
}
