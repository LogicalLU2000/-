# include<iostream>
using namespace std;
class Student
{ 
public:
    Student(int n, float s): num(n), score(s){}
    void change(int n, float s) const{ num=n; score=s;}
    void display() const{cout <<num<<" "<<score<<endl;}
private:                      //����Ϊ����Ա����������const��Ա! 
    mutable int num;        //mutable 
	mutable float score;   //�����ɱ����ݳ�Ա 
}; 
int main()
{ 
    const Student stud(101,78.5); 
    stud.display();   //���ó���Ա���� 
    stud.change(101,80.5); 
    stud.display();  
    return 0;
}
