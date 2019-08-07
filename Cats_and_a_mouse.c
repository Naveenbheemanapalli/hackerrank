#include<stdio.h>
int main(){
    int i,j,no_of_q;
    scanf("%d",&no_of_q);
    int arr[no_of_q][3];
    for(i=0;i<no_of_q;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x,y,z;
    for(i=0;i<no_of_q;i++){
        x=arr[i][0];
        y=arr[i][1];
        z=arr[i][2];
        if(x > z){
            x = x-z;
        }
        else{
            x = z-x;
        }
        if(y > z){
            y = y-z;
        }
        else{
            y = z-y; 
        }
        if(x > y)   
            printf("Cat B\n");
        else{
            if(y > x)
                printf("Cat A\n");
            if(x == y)
                printf("Mouse C\n");
        }
    }
return 0;
}