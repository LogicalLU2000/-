#include <iostream>
using namespace std;
int main()
{
	void Sort(int *p,int n);
	cout<<"��Ҫ���뼸������"<<endl; 
	int n,i;
	cin>>n;
	int *p=new int[n];
	cout<<"�����룺";
	for(i=0;i<n;i++) cin>>p[i];
	cout<<"���ո����������"; 
    for(i=0;i<n;i++) cout<<p[i]<<" ";
    cout<<endl;
	Sort(p,n);
	cout<<"�������Ѿ��ź��ˣ��뿴��"; 
	for(i=0;i<n;i++) cout<<p[i]<<" ";
	cout<<endl;
	delete[]p;
	return 0;
}
void Sort(int *p,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				int temp;
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	 } 
}
