#include<stdio.h>

int main(void){
    int j,i,sizeofarray , div_val,count=0,sum;
    scanf("%d %d",&sizeofarray,&div_val);

    int arr[sizeofarray];

    for(i=0;i<sizeofarray;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<sizeofarray;i++){
        int key = arr[i];
        for(j=i+1;j<sizeofarray;j++){
            sum = 0;
            sum =key+arr[j];
            if(sum%div_val==0){
                count++;
            }
        }
    }
    printf("%d",count);

    return 0;
}
