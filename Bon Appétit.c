#include<stdio.h>
int main(){
    int num_items,skipped_item;
    scanf("%d%d",&num_items,&skipped_item);

    int bill[num_items];

    for(int i=0;i<num_items;i++){
        scanf("%d",&bill[i]);
    }

    int bill_charged,total_bill=0;
    scanf("%d",&bill_charged);

    for(int i=0;i<num_items;i++){
        if(skipped_item==i)
            continue;
        total_bill += bill[i];
    }
    total_bill=total_bill/2;
    if(bill_charged == total_bill){
        printf("Bon Appetit");
    }
    else{
        printf("%d",bill_charged-total_bill);
    }
}