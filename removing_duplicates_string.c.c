#include<stdio.h>
#include<string.h>
void Del_duplicates(char *s){
	int i,j;
	for(i=0;s[i];i++){
		for(j=i+1;s[j];j++){
			if(s[i] == s[j]){
				strcpy(s+j,s+j+1);
				j--;
			}
		}
	}
}
int main(){
	char s[50];
	printf("Enter The String : ");
	gets(s);
	Del_duplicates(s);
	puts(s);
}
