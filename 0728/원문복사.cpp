#include<stdio.h>
int strlen(const char* str){
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}

void string_copy(int *dest,char *src){
	int length = strlen(src);
	for (int i = 0; i < length; i++)
		dest[i]=src[i];
}
int main(){
	char str1[128]="ABCDEF";
	int str2[128]={0};

	string_copy(str2,str1);

	printf("%s\n",str2);
}
/*
str 000000000000
int 000000000000
+3하면 똑똑해서 ...할까요 4*3할까요?


*/