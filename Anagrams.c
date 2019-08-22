#include<stdio.h>
#include<string.h>
int anagram(char *s,char *p){
	int i,j,count1=0,count2=0;
	char ch;
	for(i=0;s[i];i++){
		ch = s[i];
		if(!((ch>='a' && ch <='z')||(ch>='A' && ch<='Z')))
				continue;
		for(j=0;s[j];j++){
			if(ch==s[j]){
				count1++;
			}
		}
		for(j=0;p[j];j++){
			if(ch==p[j]){
				count2++;
			}
		}
		if(count1!=count2)
			return -1;
		else{
			count1=0;
			count2=0;
		}
	}	
	return 1;
}
void upper_conversion(char *s){
	int i;
	for(i=0;s[i];i++){
		if(s[i]>='a' && s[i]<='z')
			s[i] = s[i]-32;
	}
}
int main(){
	char s[50],p[50];
	int r;
	printf("Enter The 1.strings : ");
	scanf("%s",s);
	printf("Enter The 2.strings : ");
	scanf("%s",p);
	//upper_conversion(s);
	//upper_conversion(p);
	r=anagram(s,p);
	if(r==1){
		printf("Anagram");
	}
	else
		printf("Not Anagram");
	
}
