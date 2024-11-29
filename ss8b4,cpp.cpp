#include<Stdio.h>
int main(){
	int x,y;
	printf("moi ban nhap so phan tu");
	scanf("%d %d",&x,&y);
	int a[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max = a[0][0];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(a[i][j]>max){
				max = a[i][j];
			}
		}
	}
	printf("so phan tu lon nhat la :%d",max);
	return 0;
}
