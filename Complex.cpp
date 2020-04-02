#include<bits/stdc++.h>
using namespace std;
class complex_num
{
	private:
		double real,image;
	public:
		complex_num(double r,double i);
		friend double operator!(complex_num A);
		friend complex_num operator ~(complex_num B);
		friend bool operator==(complex_num A,complex_num B);
		friend complex_num operator*(complex_num A,complex_num C);
};
complex_num::complex_num(double r,double i)
{
	real=r;
	image=i;
}
double operator!(complex_num A)
{
	double sum;
	sum=sqrt(A.real*A.real+A.image*A.image);
	return sum;
}
/*complex_num operator ~(complex_num B)
{
	complex_num A;
	A. real=B.real;
	A.image=-B.image;
	return A;
}*/
bool operator==(complex_num A,complex_num B)
{
	if(A.real==B.real&&A.image==B.image)
		return true;
	else
		return false;
}
complex_num operator*(complex_num A,complex_num C)
{
	complex_num B;
	B.real=A.real*C.real+A.image*C.image;
	B.image=A.real*C.image+A.image*C.real;
	return B;
}

int main ()
{
	complex_num A,B,C;
	return 0;
}
