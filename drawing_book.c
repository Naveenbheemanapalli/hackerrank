#include<stdio.h>
int main(){
    int no_of_pages,brie_page;
    scanf("%d\n%d",&no_of_pages,&brie_page);

    int last_pg,goal_pg,total_pg,total_pg1;

    total_pg=(no_of_pages+2)/2;
    total_pg1=(brie_page+2)/2;
    goal_pg=total_pg1-1;
    last_pg = total_pg-goal_pg-1;

    if(last_pg < goal_pg){
        printf("%d",last_pg);
    }
    else
        printf("%d",goal_pg);

return 0;
}