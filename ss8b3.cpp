#include<stdio.h>
int main(){
	
	int x;
	scanf("%d",&x);
	int a[x][x];
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			scanf(" %d",&a[i][j]);
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
