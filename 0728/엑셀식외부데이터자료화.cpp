#include<stdio.h>
int strlen(const char* str){
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}

void sub(char *dest,char *src,char ch){
	int length=strlen(src);
	int j=0;
	for (int i = 0; i <= length; i++)
	{
		if(src[i]!=ch){
			dest[j]=src[i];
			j++;
		}
		else{
			dest[j]=' ';
			j++;
		}
	}
}
int main(){
	char *src="Hello,I'm,Yuchul";
	char dest[128];
	sub(dest,src,',');
	printf("%s\n",dest);
}