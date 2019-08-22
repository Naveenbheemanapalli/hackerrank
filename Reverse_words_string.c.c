#include<stdio.h>
int my_strlen(const char *s){
	int i;
	for(i=0;s[i];i++);
	return i;
}

void my_strrev(char *s){
	int i,j;
	char ch;
	j=my_strlen(s);
	for(i=0,j=j-1;i<j;i++,j--){
		ch = s[j];
		s[j] = s[i];
		s[i] = ch;
	}
	i = my_strlen(s);
}

void str_rev(char *s,char *p){
	char ch;
	while(s<p){
		ch = *p;
		*p = *s;
		*s = ch;
		s++;
		p--;
	}
}
int main(){
	char s[50];
	printf("Enter the String:");
	gets(s);
	my_strrev(s);
	puts(s);
/*	str_rev(s+0,s+8);
	str_rev(s+10,s+11);
	str_rev(s+13,s+19);
	str_rev(s+21,s+25);
	puts(s); */
int i,j;
	for(i=0;s[i];){
		for(j=i;s[j];j++){
			if(s[j]==' '||s[j]=='\0')
				break;
		}
		j--;
		str_rev(s+i,s+j);
		i=j+2;
		j=i;
	}
	
	puts(s);  
}
