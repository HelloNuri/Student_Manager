#include<stdio.h>
/*int main(){
	//char*=char[]
	const char* WeekDay[]={
		"일요일","월요일","화요일","수요일","목요일","금요일","토요일"
	};
	char *str = "ABCDEF";//읽기 전용 공간, 값을 수정할 수는 없다. 이유는 시스템 내부에서 이것을 사용하는 곳이 있는데 값을 바꾸면 계속해서 에러가 나기 때문에
	//str[0]='B';//오류가 난다
	
}*/

int strlen(const char* str){
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}
//문자열의 길이를 알아내는 함수
void lowerCase(char *str){
	int length=strlen(str);
	for(int i=0;i<length;i++){
		if(str[i]>='A'&&str[i]<='Z')
			str[i]+='a'-'A';
	}
}
int main(){
	char str[128]="Hello WORLD HELLO WORLD\n";
	lowerCase(str);
	printf(str);
}//이미 만들어진 배열에 새로 scanf를 하면배열 중간에 빈 공간이 있다. scanf로 문자열을 받아올 때 문자열의 끝을 의미하는 것으로 끝에 Null==\0을 넣기 때문에 그렇다.