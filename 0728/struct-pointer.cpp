/*#include<stdio.h>
typedef struct Student{
	int number;//����ü ���� ������ ��� ������� �ϰų� �ʵ��� �Ѵ�.
	int grade;
	int classNumber;
	int score[12][10];
}Student;
void PrintStudent(const Student *student){//�̷��� �ϸ� 492byte�� �Ǵ� struct�� �������� �ʾƼ� �޸𸮰� ������� �ʰ�, �����ͷ� ���� ���� �ٲ� ������ ����!
	printf("%d0%d%d\n",(*student).grade,(*student).classNumber,(*student).number);
}
int main(){
	Student student;
	student.number=13;
	student.grade=1;
	student.classNumber=5;
	PrintStudent(&student);
}
*/