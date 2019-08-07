#include<stdio.h>
int main(){
    int buget,n,m,fair;
    scanf("%d%d%d\n",&buget,&n,&m);
    
    int i,j,key[n],usbs[m];
    for(i=0;i<n;i++){
        scanf("%d",&key[i]);
    }

    for(i=0;i<m;i++){
        scanf("%d",&usbs[i]);
    }

    int best_fair = 0;

    for(i=0;i<n;i++){
        int k = key[i];
        for(j=0;j<m;j++){
            fair = k + usbs[j];
            if(fair > best_fair && fair <= buget){
                best_fair = fair;
            }
        }
    } 
    if(best_fair == 0){
        printf("-1");
    }
    else{
        printf("%d",best_fair);
    }
return 0;
}