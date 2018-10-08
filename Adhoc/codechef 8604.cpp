#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,m;
	cin>>n>>m;
	int a[n];
	vector<set<int>>v;
	set<int>s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	for(int i=n-1;i>=0;i--){
		
		s.insert(a[i]);
		v.push_back(s);
	}
	
	
		for(int i=0;i<m;i++){
			
			int j;
			cin>>j;
			
			cout<<v[n-j].size()<<"\n";
			
		}

	// your code goes here
	return 0;
}