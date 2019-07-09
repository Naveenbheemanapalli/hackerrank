#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);

    int sc[n];
    int min,max,scl,sch,i;

    for(i=0;i<n;i++){
        scanf("%d",&sc[i]);
    }
    scl=sch=sc[0];
    max=min=0;

    for(i=0;i<n;i++){
        if(sc[i]>sch){
            max++;
            sch = sc[i];
        }
        else{
            if(sc[i]<scl){
            min++;
            scl = sc[i];}
        }
    }
    printf("%d %d",max,min);
}
