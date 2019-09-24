#include<stdio.h>
int main(){
    int x,n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(x=1;x<=n;x++){
        for(i=0;x!=arr[i];i++);
        for(j=0;i+1 != arr[j];j++);
        printf("%d\n",j+1);
    }


}