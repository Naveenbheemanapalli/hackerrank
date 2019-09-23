#include<stdio.h>
int reverse(int i){
    int num=0;
    while(i){
    num = num*10+i%10;
    i = i/10;
    }
    return num;    
}
int main(){
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    int t,count = 0;
    for(;i<=j;i++){
        int temp = reverse(i);
        t = abs(i-temp);
        if(t%k==0)
            count++;
    }
    printf("%d",count);
}

