#include<stdio.h>
int strlen(const char* str){
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}
//문자열 길이 알아내기
/*int tr=1;

int is_palindrome(const char* str){
	
	const int length=strlen(str);
	char reverse[1000];

	for(int i = length-1,j=0;i>=0; i--,j++)
			reverse[j]=str[i];
	//배열을 거꾸로 돌림

	for(int i=0;i<length;i++){
		if(reverse[i]!=str[i])
			tr=0;
	}
	//거꾸로 돌린 배열과 인자 배열이 같지 않으면 tr을 0으로 설정하고 리턴
	return tr;
}*/
//내가 짠 비효율적인 코드

int is_palindrome(const char* str){
	int length=strlen(str);
	for (int i = 0; i < length/2; i++)
	{
		if(str[i]!=str[length-i-1])
			return 0;
	}

	return 1;
}
//효율적인 정답코드

int main(){
	char str[128]="racecar";
	if(is_palindrome(str))
		printf("%s is palindrome\n",str);
	else
		printf("%s isn't palindrome\n",str);
}