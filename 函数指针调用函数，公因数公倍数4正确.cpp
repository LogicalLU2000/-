#include <iostream>
using namespace std;
int main()
{#include <iostream>
using namespace std;
int main()
{
    int m1(int *x,int *y,int *pp1) ;
    int m2(int *x,int *y,int *z,int *pp2);
    int a,b;
    int c=0,d=1;
    int GetResult(int (*pm1)(int *,int *,int *),int (*pm2)(int *,int *,int *,int*),int *a1,int *b1,int *c1,int *d1);
    cin>>a>>b;   //���������� 
    GetResult(m1,m2,&a,&b,&c,&d);
    cout<<"���������"<<c<<"��С������:"<<d<<endl;
    return 0;
}
int GetResult(int (*pm1)(int *,int *,int *),int (*pm2)(int *,int *,int *,int *),int *a1,int *b1,int *c1,int *d1)
{
    pm1(a1,b1,c1);     //���ݵ�ַ��
    pm2(a1,b1,c1,d1);  //���ݵ�ַ��
    return 0;
}
int m1(int *x,int *y,int *pp1)   //*pp1��c 
{
    int a=(*x),b=(*y); 
    int m,t;
    while(b!=0)      //�� ����=��,���˾���ѭ��
    {
        if(a<b)
        {
            m=a;
            a=b;
            b=m;
        }
        t=a%b;
        a=b;
        b=t;
    }
    (*pp1)=a;          //������� c 
    return 0;
}
int m2(int *x,int *y,int *z,int *pp2) //*pp2--d;
{
    (*pp2)=(((*x)*(*y))/(*z));    //����a,b  ��m1�е���ָ�룬��ֵ�Ѿ��ı䣻�����ڴ���a,bʱӦ��ʹ��ֵ���� 
    return 0;                       //��ʹ�ø�ֵ�������±��� 
}
//ֵ��ע����ǣ��ڷ�������Ϊint���͵ĺ�������Ҫreturn 0�����򱨴��� 

