#include<stdio.h>
int main(){
    int no,first=5,liked,count=0;
    scanf("%d",&no);
    for(int i=0;i<no;i++){
        liked = first/2;
        first = liked;
        count =count +liked;
        first =first *3;
    }
    printf("%d",count);
}