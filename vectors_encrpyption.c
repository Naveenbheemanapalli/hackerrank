#include<stdio.h>

void Decrpyt(char *s,int key);

void str_rev(char *p,char *q);

int main(){
	char s[200];
	printf("enter the String : ");
	gets(s);
	int key;
	printf("enter the Key : ");
	scanf("%d",key);  
	puts(s);
	Decrpyt(s,key);
	
	puts(s);
}

void srev(char *p,char *q){
	char ch;
	ch = *p;
	*p = *q;
	*q = ch;
}

void Decrpyt(char *s,int key){
	int i,j=0;
	for(i=0;s[i];i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
			j++;
			if(j%key==0){
				if(*(s+i+1)=='\0')
					goto label;
				if(*(s+i)==' '){
					srev(s+i+1,s+i+1);
				}
				if(*(s+i+1)==' '){
					srev(s+i,s+i+1+1);
				}
				else{
					srev(s+i,s+i+1);
				}
				label : ;
			}
		}
	}
}
