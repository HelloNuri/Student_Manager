#include<stdio.h>
/*int main(){
	//char*=char[]
	const char* WeekDay[]={
		"�Ͽ���","������","ȭ����","������","�����","�ݿ���","�����"
	};
	char *str = "ABCDEF";//�б� ���� ����, ���� ������ ���� ����. ������ �ý��� ���ο��� �̰��� ����ϴ� ���� �ִµ� ���� �ٲٸ� ����ؼ� ������ ���� ������
	//str[0]='B';//������ ����
	
}*/

int strlen(const char* str){
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}
//���ڿ��� ���̸� �˾Ƴ��� �Լ�
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
}//�̹� ������� �迭�� ���� scanf�� �ϸ�迭 �߰��� �� ������ �ִ�. scanf�� ���ڿ��� �޾ƿ� �� ���ڿ��� ���� �ǹ��ϴ� ������ ���� Null==\0�� �ֱ� ������ �׷���.