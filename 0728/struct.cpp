#include<stdio.h>
struct Student{
	int number;//����ü ���� ������ ��� ������� �ϰų� �ʵ��� �Ѵ�.
	int grade;
	int classNumber;
	int score[12][10];
};
/*typedef struct Student{
	int number;//����ü ���� ������ ��� ������� �ϰų� �ʵ��� �Ѵ�.
	int grade;
	int classNumber;
} Student;*///�̷��� typedef struct...�� ����� ���� �ִ�.
void PrintStudent(Student student){
	printf("�й�: %d, �г��: %d-%d\n",student.number,student.grade,student.classNumber);
}
typedef struct Student Student;//C������ ȣȯ���� ���ؼ� ���� struct�� ���� �ʰ� �̷��� �� ���� �ִ�.
void main(){
	struct Student student;//��ü(object)
	//struct�� cpp������ �� �ᵵ ������ C���� ȣȯ�ϱ����ؼ� ����.
	student.classNumber=10513;	
	student.grade=1;
	student.number=13;
	PrintStudent(student);
	printf("%d\n",sizeof(student));
	printf("\n");

}