#include<stdio.h>
int main(){
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2]={{7,8},{9,10},{11,12}};
	int c[2][2]={{0,0},{0,0}};
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
	    		c[i][j]+=a[i][k]*b[k][j];
	    	}
		}
	}
	printf("Matrix Multiplication\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
