#include<stdio.h>
int strlen(const char* str){
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}
//���ڿ� ���� �˾Ƴ���
/*int tr=1;

int is_palindrome(const char* str){
	
	const int length=strlen(str);
	char reverse[1000];

	for(int i = length-1,j=0;i>=0; i--,j++)
			reverse[j]=str[i];
	//�迭�� �Ųٷ� ����

	for(int i=0;i<length;i++){
		if(reverse[i]!=str[i])
			tr=0;
	}
	//�Ųٷ� ���� �迭�� ���� �迭�� ���� ������ tr�� 0���� �����ϰ� ����
	return tr;
}*/
//���� § ��ȿ������ �ڵ�

int is_palindrome(const char* str){
	int length=strlen(str);
	for (int i = 0; i < length/2; i++)
	{
		if(str[i]!=str[length-i-1])
			return 0;
	}

	return 1;
}
//ȿ������ �����ڵ�

int main(){
	char str[128]="racecar";
	if(is_palindrome(str))
		printf("%s is palindrome\n",str);
	else
		printf("%s isn't palindrome\n",str);
}