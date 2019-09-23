#include<stdio.h>
int main(){
    int no,co=0,i;
    scanf("%d",&no);
    int res[no];
    label :
    if(co<no){
        int n,k,i,j,count=0;
        scanf("%d %d",&n,&k);
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++){
            int temp = arr[i];
            if(arr[i]<=0)
                count++;
        }
        if(count >= k){
            res[co]=1;
        }
        else
            res[co]=0;
        co++;
        goto label ;
    }
    for(i=0;i<no;i++){
        if(res[i]==1){
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
}
