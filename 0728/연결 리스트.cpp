#include<stdio.h>
#include<stdlib.h>

//연결 리스트를 만들기 위해서 다음 학생의 포인터를 가질 수 있도록 한다.
typedef struct Student
{
	int number;
	char name[32];
	int gender;		//1남2여
	Student *next;
} Student;

Student *first=NULL;//연결 리스트를 써도 첫 학생의 주소값은 알고 있어야 한다.

Student* getStudent(int index){
	Student *s=first;
	for (int i = 0; i < index; i++){
		if(s->next)
			s=s->next;//->라는 것은 class.멤버변수와 같은 것으로 s가 클래스가 아닌 포인터이기 때문에 .이 아닌 ->를 쓴다.
		else
			return NULL;
	}
}//TIP:가장 끝의 학생은 포인터에 NULL을 넣도록 한다.
//연결리스트를 사용해서 어떤 학생의 주소를 알 수 있도록 한다.

void addStudent(Student *student){
	Student *s=first;
	while(s->next!=NULL)
		s=s->next;
	s->next=student;
}
//연결리스트의 끝에 새로운 학생을 추가하는 함수

int insertStudent(Student *C, int index){
	if(index==0){
		C->next=first;
		first=C;
		return 1;
	}//첫 번째 학생을 바꾸려고 할 때 설정

	Student *A=getStudent(index-1);
	if(A==NULL)
		return 1;
	//index가 연결 리스트의 끝에 위치했는가

	Student *A=getStudent(index-1);
	Student *B=A->next;
	A->next=C;
	C->next=B;
}
//학생을 중간에 삽입하기

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