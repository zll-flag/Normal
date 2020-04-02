#include <iostream>
#include <algorithm>
using namespace std;

string add (string a,string b) {
	a=a.substr(a.find_first_not_of('0'));
	b=b.substr(a.find_first_not_of('0'));
	long long lenA=a.length();
	long long lenB=b.length();
	long long len=max(lenA,lenB)+10;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	string ans(len,'0');
	for(int j=0;j<lenA;++j)
	{
		ans[j]=a[j];
	}
	int tempt=0;
	for(int i=0;i<len;++i)
	{
		if(i<lenB)
			tempt+=(ans[i]-'0')+(b[i]-'0');
		else
			tempt+=(ans[i]-'0');
		ans[i]=tempt%10+'0';
		tempt/=10;
	}
	reverse(ans.begin(),ans.end());
	return ans.substr(ans.find_first_not_of('0'));
}

int main() {
	string a,b;
	cin>>a>>b;
	cout<<add(a,b)<<endl;
}
