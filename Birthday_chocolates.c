#include <stdio.h>

int main(void){
    int i,n_bars,count=0;
    scanf("%d",&n_bars);

    int arr[n_bars];
    for(i=0;i<n_bars;i++){
        scanf("%d",&arr[i]);
    }

    int date,month;
    scanf("%d %d",&date,&month);

    for(i=0;i<=n_bars-month;i++){
        int sum=0;
        for(int j=i;j<i+month;j++){
            sum +=arr[j];
        }

        if(sum==date){ 
            count++;
        }
    }

    printf("%d",count);
}