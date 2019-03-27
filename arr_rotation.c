#include<stdio.h>
int main(){
    int n,d,j,i;
    scanf("%d %d",&n,&d);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
 	for(j=0;j<d;j++){
	 
    	int temp=a[0];
    	for(i=0;i<n;i++){
        	a[i]=a[i+1];
    	}
    	a[n-1]=temp;
	}
    
    
    for(j=0;j<n;j++){
    	printf("%d ",a[j]);
	}
}
