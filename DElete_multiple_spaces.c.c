#include<stdio.h>
void Del_spaces(char *s){
	int i,j;
	for(i=0;s[i];i++){
		if(s[i]==' '&&s[i+1]==' '){
			for(j=i;s[j];j++){
				s[j] = s[j+1];
			}
			i--;
		}
	}
}
int main(){
	char s[100];
	int i,c=0;
	printf("Enter the String :");
	gets(s);
	Del_spaces(s);
	puts(s);
	
}


