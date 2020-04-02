#include<bits/stdc++.h>
//#include<ctime>
using namespace std;
class Date
{
	private:
		int year,month,day;
	public:
    int get_year(){return year;}
    int get_month(){return month;}
    int get_day(){return day;}
	Date()
	{
		tm *t;
		time_t t1=time(0);
		t=localtime(&t1);
		year=t->tm_year+1900;
		month=t->tm_mon+1;
		day=t->tm_mday;
	}
	virtual void print()
	{
		cout<<setfill('0');
		cout<<setw(2)<<month<<"-"<<day<<"-"<<year<<endl;
	}
};
class ShortE : public Date
{
    public:
    void print()
    {
        cout<<get_day()<<"-"<<setw(2)<<get_month()<<"-"<<get_year()<<endl;
    }
};
class MediumDate : public Date
{
    public:
    void print()
    {
        string list_mon[]={"Jua","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
        string m=list_mon[get_month()];
        cout<<m<<'.'<<get_day()<<','<<get_year()<<endl;
	}
};
class LongDate : public Date
{
    public:
    void print()
    {
        string list_mon[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
        string m=list_mon[get_month()];
        cout<<m<<' '<<get_day()<<','<<get_year()<<endl;
    }
};
int main ()
{
	Date *A ;
	A = new Date();
	A->print();
	delete A;
	A = new ShortE();
	A->print();
	delete A;
	A = new MediumDate;
	A->print();
	delete A;
	A = new LongDate;
	A->print();
	delete A;
}
