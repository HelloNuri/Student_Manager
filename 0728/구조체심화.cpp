#include<stdio.h>
#include<stdlib.h>
//�л� ���� ���α׷��� �����. Student ����ü�� �л� ����ŭ ����� �л� ���� ����ؼ� �߰��ǰų� ������ �� �ִ�.

typedef struct Student
{
	int number;
	char name[32];
	int gender;		//1��2��
} Student;

Student *student;
int studentCount=0,capacity=0;//���ڴ� student �迭�� �л� ��ȣ(�ּ�), capacity�� ��� �л� ��

void checkCapacity(){
	if(studentCount>=capacity){
		capacity*=2;
		Student* newStudentList=(Student*)malloc(sizeof(Student)*capacity);
		for (int i = 0; i < studentCount; i++)
			newStudentList[i]=student[i];
		free(student);
		student = newStudentList;
	}
}//�л� ���� ���� �ִ� �迭���� ũ�� �л� ���� 2�踸ŭ �迭�� Ȯ���ϰ�װͿ� ���� ����� �����سִ´�.

void addStudent(Student* s){
	checkCapacity();
	student[studentCount]=*s;
	studentCount++;
}
//????	

//�л��� �����ٸ� ���� ĭ�� ä���ִ´�.
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

//����,���� �� ���� �迭 ����Ʈ ������� �����ϸ� �ټ��� �л����� ���� ���� ������ ��ȿ�����̱⿡ ���� ����Ʈ�� ����Ѵ�
//�׷��� ���� ����Ʈ�� ��ü ����Ʈ�� �� ��ȸ�� �� �ð��� ���� �ɸ���.
//���󼼰踦 ���� �� ����ؼ� �ִ� ��ü�� �迭 ����Ʈ��, �Ѿ�ó�� ��� ��Ÿ���ٰ� ������� ���� ���� ����Ʈ�� �������.