#include<stdio.h>
int main(){
	unsigned int n;
	scanf("%d",&n);
	int i,j=1,r,binary=0;
	
	while(n>0){
		r=n%2;
		binary+=(r*j);
		j=j*10;
		n=n/2;
	}
	
	printf("%d",binary);
	
	printf("\n%d",sizeof(int));
}
