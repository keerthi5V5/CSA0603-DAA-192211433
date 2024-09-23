#include<stdio.h>
int main(){
	int arr[]={64,25,12,22,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Intial Array:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	int i,j,minIndex,temp;
	for(i=0;i<=n-1;i++){
		minIndex=i;
		for(j=i+1;j<=n-1;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		if(minIndex!=i){
			temp=arr[i];
			arr[i]=arr[minIndex];
			arr[minIndex]=temp;
		}
	}
	printf("\nSelection sort: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
