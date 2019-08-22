#include<stdio.h>
int No_words(char *s){
	int i,j=0;
	for(i=0;s[i];i++){
		if(s[i]==' ' && s[i+1]==' ')
			continue;
		if(s[i]==' '||s[i]=='\0'){
			j++;
		}	
	}
	return j+1;
}
int main(){
	char s[100];
	int i,c=0;
	printf("Enter the String :");
	gets(s);
	c=No_words(s);
	printf("%d",c);
	
}


