#include<stdio.h>
struct Student{
	int number;//구조체 안의 변수를 멤버 변수라고 하거나 필드라고 한다.
	int grade;
	int classNumber;
	int score[12][10];
};
/*typedef struct Student{
	int number;//구조체 안의 변수를 멤버 변수라고 하거나 필드라고 한다.
	int grade;
	int classNumber;
} Student;*///이렇게 typedef struct...를 대신할 수도 있다.
void PrintStudent(Student student){
	printf("학번: %d, 학년반: %d-%d\n",student.number,student.grade,student.classNumber);
}
typedef struct Student Student;//C언어와의 호환성을 위해서 밑의 struct를 쓰지 않고 이렇게 쓸 수도 있다.
void main(){
	struct Student student;//객체(object)
	//struct는 cpp에서는 안 써도 되지만 C언어와 호환하기위해서 쓴다.
	student.classNumber=10513;	
	student.grade=1;
	student.number=13;
	PrintStudent(student);
	printf("%d\n",sizeof(student));
	printf("\n");

}