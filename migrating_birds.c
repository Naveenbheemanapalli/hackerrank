#include<stdio.h>
int main(){
    int num,i,j,key,count,var=-1;
    scanf("%d",&num);

    int t,input[num];
    for(i=0;i<num;i++){
        scanf("%d",&input[i]);
    }
    
    t = input[0];
    for(i=0;i<num;i++){
        if(t < input[i]){
            t = input[i];
        }
    }
    
    int type[t];

    for(i=0;i<num;i++){
        count=0;
        key = input[i];
        if(key == -1)   
            continue;
        for(j=0;j<num;j++){
            if(key == input[j]){
                count++;
                input[j]=var;
            }
        }
        type[key-1] = count;
    }

     key = type[0];
    for(i=0;i<t;i++){
        if(key < type[i]){
            count = i+1;
            key = type[i];
        }
    }

    printf("%d",count);
    return 0;
}
