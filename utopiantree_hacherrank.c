#include<stdio.h>
int main(){
    int i,j,n,height=1;
    scanf("%d",&n);
    int arr[n],res[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++){
        height = 1;
        for(j=0;j<arr[i];j++){
            if(j%2==0){
                height = height+height;
            }
            else{
                height = height+1;
            }
        }
        res[i]=height;
    }
    for(i=0;i<n;i++)
    printf("%d\n",res[i]);
}

