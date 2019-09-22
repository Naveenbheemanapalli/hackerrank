#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    char p[n][25];
    for(i=0;i<n;i++)
        scanf("%s",p[i]);
    int m;
    scanf("%d",&m);
    char q[m][25];
    for(i=0;i<m;i++)
        scanf("%s",q[i]);
    int res[m],count=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(strcmp(q[i],p[j])==0){
                count++;
            }
        }
        res[i] = count;
        count = 0;
    }
    for(i=0;i<m;i++)
        printf("%d",res[i]);
    
}

