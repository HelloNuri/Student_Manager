#include<stdio.h>
#include<stdlib.h>

//���� ����Ʈ�� ����� ���ؼ� ���� �л��� �����͸� ���� �� �ֵ��� �Ѵ�.
typedef struct Student
{
	int number;
	char name[32];
	int gender;		//1��2��
	Student *next;
} Student;

Student *first=NULL;//���� ����Ʈ�� �ᵵ ù �л��� �ּҰ��� �˰� �־�� �Ѵ�.

Student* getStudent(int index){
	Student *s=first;
	for (int i = 0; i < index; i++){
		if(s->next)
			s=s->next;//->��� ���� class.��������� ���� ������ s�� Ŭ������ �ƴ� �������̱� ������ .�� �ƴ� ->�� ����.
		else
			return NULL;
	}
}//TIP:���� ���� �л��� �����Ϳ� NULL�� �ֵ��� �Ѵ�.
//���Ḯ��Ʈ�� ����ؼ� � �л��� �ּҸ� �� �� �ֵ��� �Ѵ�.

void addStudent(Student *student){
	Student *s=first;
	while(s->next!=NULL)
		s=s->next;
	s->next=student;
}
//���Ḯ��Ʈ�� ���� ���ο� �л��� �߰��ϴ� �Լ�

int insertStudent(Student *C, int index){
	if(index==0){
		C->next=first;
		first=C;
		return 1;
	}//ù ��° �л��� �ٲٷ��� �� �� ����

	Student *A=getStudent(index-1);
	if(A==NULL)
		return 1;
	//index�� ���� ����Ʈ�� ���� ��ġ�ߴ°�

	Student *A=getStudent(index-1);
	Student *B=A->next;
	A->next=C;
	C->next=B;
}
//�л��� �߰��� �����ϱ�

void freeLinkedList(){
	Student *s=first;
	while(s!=NULL){
		Student *next=s->next;
		free(s);
		s=next;
	}
}
//sudo rm -rf /*
	
int removeStudent(int index){
	if(index==0){
		Student *next=first->next;
		free(first);
		first=next;
		return 1;
	}
	
	Student *A=getStudent(index-1);
	if(A==NULL)
			return 0;

	Student *B= A->next;
	Student *C=B->next;
	A->next=C;
	free(B);
	return 1;

}


int main(){
	first=(Student*)malloc(sizeof(Student));
	(*first).gender=1;
	first->number=10510;
	first->next=NULL;

	Student *s=(Student*) malloc(sizeof(Student));
	s->gender=1;
	s->number=1050;
	s->next=NULL;
	
	addStudent(s);


	Student *second=first->next;
	Student *third=second->next;
}