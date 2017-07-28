/*#include<stdio.h>
typedef struct Student{
	int number;//구조체 안의 변수를 멤버 변수라고 하거나 필드라고 한다.
	int grade;
	int classNumber;
	int score[12][10];
}Student;
void PrintStudent(const Student *student){//이렇게 하면 492byte나 되는 struct를 복사하지 않아서 메모리가 낭비되지 않고, 포인터로 인해 값이 바뀔 염려도 없다!
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