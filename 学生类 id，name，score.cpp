#include <iostream>
using namespace std;
class Student
{
public:
	int id; //xuehao
	string name; //xingming
	float score;
	static float total;
	static int count;        //��������̬���ݳ�Ա 
	Student(int xh,string nam,float sco);
	Student();

	void ChangeScore();
	static void GetAverage(); //��̬��Ա���� 
};
Student::Student(int xh,string nam,float sco):id(xh),name(nam),score(sco){} 
                                         //�������Ĺ��캯�� 
float Student::total=0.0;  //�ܷ�   #��̬���ݳ�Ա  
int Student::count=1;    //������ #����������г�ʼ��
 
int main()
{
	Student stud1(0000000001,"zhangsan",0.0);
	stud1.ChangeScore();
	Student::GetAverage();//��̬��Ա�����ĵ��ã����������� 
}


void Student::ChangeScore()
{
	cout<<"���������:";
	cin >>score;
	total=Student::score;
}
void Student::GetAverage()  //static ������ֱ�ӷ���static ���� 
{
	cout<<"ƽ������:"<<(total/count);  //ע�� ��������float/int 
} 
