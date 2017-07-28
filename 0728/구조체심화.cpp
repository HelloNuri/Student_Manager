#include<stdio.h>
#include<stdlib.h>
//학생 관리 프로그램을 만든다. Student 구조체를 학생 수만큼 만들되 학생 수는 계속해서 추가되거나 감소할 수 있다.

typedef struct Student
{
	int number;
	char name[32];
	int gender;		//1남2여
} Student;

Student *student;
int studentCount=0,capacity=0;//전자는 student 배열의 학생 번호(주소), capacity는 모든 학생 수

void checkCapacity(){
	if(studentCount>=capacity){
		capacity*=2;
		Student* newStudentList=(Student*)malloc(sizeof(Student)*capacity);
		for (int i = 0; i < studentCount; i++)
			newStudentList[i]=student[i];
		free(student);
		student = newStudentList;
	}
}//학생 수가 지금 있는 배열보다 크면 학생 수의 2배만큼 배열을 확장하고그것에 원래 목록을 복사해넣는다.

void addStudent(Student* s){
	checkCapacity();
	student[studentCount]=*s;
	studentCount++;
}
//????	

//학생이 빠졌다면 빠진 칸을 채워넣는다.
void removeStudent(int index){
	for (int i = index; i < studentCount-1; i++)
		student[i]=student[i+1];
	studentCount--;
}

void insertStudent(Student *s,int index){

	checkCapacity();
	for (int i = studentCount; i > index; i--)
		student[i]=student[i-1];
	student[index]=*s;
	studentCount++;
}

int main(){
	student = (Student*)malloc(sizeof(Student)*1000);
	capacity=1000;

	free(student);
}

//삭제,삽입 때 저런 배열 리스트 방식으로 저장하면 다수의 학생들을 만들 때는 굉장히 비효율적이기에 연결 리스트를 사용한다
//그러나 연결 리스트는 전체 리스트를 다 순회할 때 시간이 오래 걸린다.
//가상세계를 만들 때 계속해서 있는 물체는 배열 리스트로, 총알처럼 잠깐 나타났다가 사라지는 것은 연결 리스트로 만들었다.