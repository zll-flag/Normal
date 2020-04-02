#include<bits/stdc++.h>
using namespace std;

class Set
{
	private:
		int a[100];
		int n;
	public:
		Set(){
			n=0;
		}
		void Pop(){
			int i;
		    cout<<"集合为:{";
			for(i=0;i<n-1;i++)
	        cout<<a[i]<<",";
			cout<<a[n-1]<<"}"<<endl;
		}
		int find(int x);
		bool Add(int t);
		bool Remove(int t);
		Set operator+(Set& t);
		Set operator*(Set& t);
		Set operator-(Set& t);
		friend ostream& operator<<(ostream & os,const Set &c);
		friend istream & operator>>(istream & is,const Set &c);
};

ostream& operator<<(ostream & os,const Set &c){
	cout<<"集合为：{";
	for(int i=0;i<c.n-1;i++)
		os<<c.a[i]<<",";
	cout<<c.a[c.n-1]<<"}"<<endl;
	return os;
}

/*istream & operator>>(istream & is,const Set &c){
	for(int i=0;i<c.n;i++)
		is>>c.a[i];
	return is;
}*/

int Set::find(int x)
{
	int i;
	for(i=0;i<n;i++)
    	if(x==a[i])
		   return i;
	return -1;
}

bool Set::Add(int x)
{

	if(find(x)==-1){
		a[n]=x;
		n++;
		return true;
	}
	else
		return false;
}

bool Set::Remove(int x)
{
	int i=find(x);
	if(i!=-1){
		a[i]=a[n-1];
		n--;
		return true;
	}
	else
		return false;
}

Set Set::operator+(Set & t)
{
    Set m;
	int i;
	m=t;
	for(i=0;i<n;i++)
		m.Add(a[i]);
	return m;
}

Set Set::operator*(Set&  t)
{
	Set m;
	int i,j;
	for(i=0;i<n;i++)
	{
	   if(t.find(a[i])!=-1)
			m.Add(a[i]);
	}
	return m;
}

Set Set::operator-(Set& t)
{
    Set m;
	int i;
	m=*this;
	for(i=0;i<t.n;i++)
	{
		if(m.find(t.a[i])!=-1)
		  m.Remove(t.a[i]);
	}
		return m;
}

int main()
{
	Set s1,s2,s3,s4,s5;
	//s1插入元素
	s1.Add(1);
	s1.Add(2);
	s1.Add(3);
    s1.Pop( );
	cout<<endl;
	//s2插入元素
	s2.Add(2);
    s2.Add(3);
    s2.Add(4);
	s2.Pop();
	cout<<endl;
	//s1和s2的并集
    s3=s1+s2;
	s3.Pop();
	cout<<endl;
 	//s1和s2的交集
	s4=s1*s2;
	s4.Pop();
	cout<<endl;
	//s1和s2的差集
    s5=s1-s2;
	s5.Pop();
	cout<<endl;
	cout<<s1<<s2<<s3;
	return 0;
}
