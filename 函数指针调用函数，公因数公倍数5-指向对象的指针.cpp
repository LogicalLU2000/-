//����ָ������ָ����ö����еĺ��� 
#include <iostream>
using namespace std;
class Calculate
{
private:
	int a,b;   //�������� 
	int c,d;  //c--���������d--��С������ 
public:
	void input();
	void output();
	int m1();
	int m2();     //�ĸ���Ա���� 
	Calculate();  //Ĭ�Ϲ��캯�� 
};
Calculate::Calculate():a(0),b(0),c(0),d(0){}
            //��ʼ������Ϊ�㣬�������
int main()
{
    void GetResult(Calculate  *cal); //���� 
    Calculate cal;     //��������cal 
    cal.input();
    GetResult(&cal);  //����cal�ĵ�ַ 
    cal.output();
    return 0;
}
void GetResult(Calculate *cal1){ //��ͨ����GetResult 
	cal1->m1();
	cal1->m2();
}
void Calculate::input(){
	cout<<"������������:";
	cin>>a>>b; 
}
void Calculate::output(){
    cout<<"�������:"<<c<<endl;
	cout<<"��С������:"<<d<<endl; 
}
int Calculate::m1(){
	int x=a,y=b;
	int t;
	while(y!=0){
		if(x<y){
			int tmp;
		    tmp=x;
		    x=y;
		    y=tmp;
		}  
		t=x%y;
		x=y;
		y=t;
	}
	c=x;
	cout<<"111";
	return 0;
}
int Calculate::m2(){
	d=(a*b)/c;
	return 0;
}
