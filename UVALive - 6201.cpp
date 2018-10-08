/*

UVALive - 6201
by Shaily Roy
*/

#include <bits/stdc++.h>
using namespace std;

queue<char>q;
stack<char>st1;
map<char,int>mp;
string s;

void edge(){
	mp.clear();
		char cc =q.front();
		q.pop();
		st1.push(cc);
		int count = 1;
		mp[cc]--;

		while(!q.empty()){
			cc =q.front();
			q.pop();

			if(cc==st1.top()){
				st1.pop();
				mp[cc]++;
			//	cout<<cc;
			//	cout<<cc<<mp[cc]<<endl;
			}
			else{
			//		cout<<cc;
				char pp=st1.top();
				st1.push(cc);
				mp[pp]++;
			}
		}


		for (std::map<char,int>::iterator it=mp.begin(); it!=mp.end(); ++it)
    std::cout << it->first << " = " << it->second << '\n';

}



int main() {

	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
	//	cout<<s<<endl;

		for(int j=0;j<s.size();j++){
			q.push(s[j]);
		}
		cout<<"Case "<<i+1<<"\n";
		edge();

	}
	// your code goes here
	return 0;
}
