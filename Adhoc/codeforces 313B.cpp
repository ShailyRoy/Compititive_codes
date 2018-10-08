#include <bits/stdc++.h>
?*
codeforces 313B
?*/
using namespace std;

int main() {
	// your code goes here
	string s;
	int a[1000010];
	memset(a,0,sizeof(a));
	int m,l,r;
	cin>>s;
	cin>>m;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1]) a[i+1]=a[i]+1;
		else
           a[i+1]=a[i];
	}
	while(m--)
	{
		cin>>l>>r;
		cout<<a[r]-a[l]<<endl;
	}
	return 0;
}