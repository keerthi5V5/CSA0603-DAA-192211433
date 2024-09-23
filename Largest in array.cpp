#include<stdio.h>
int main(){
	int n,i;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements :\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int largest=arr[0];
	for(i=0;i<n;i++){
		if(largest<arr[i]){
			largest=arr[i];
		}
	}
	printf("The largest element in the array is %d",largest);
	return 0;
}
