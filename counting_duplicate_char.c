#include<stdio.h>
#include<string.h>
void count_duplicates(char *s){
	int i,j,count;
	char var = '\0';
	for(i=0;s[i];i++){
		count = 1;
		if(s[j]!='@'){
		for(j=i+1;s[j];j++){
			if(s[i] == s[j]){
				count++;
				s[j] = '@';
			}
		}
		if(count>1 && s[i]!='@')
		printf("%c ----> %d\n",s[i],count);
		}
	}
}
int main(){
	char s[50];
	printf("Enter The String : ");
	gets(s);
	count_duplicates(s);
	//puts(s);
}
