#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,a,b;
	cin>>n>>a>>b;
	
	int min=a,max=b;

	
	int ans=0;
	
	for(int i=min+1;i<=n;i++){
		if(n-i<=max)
		ans++;
	}
	
	
	cout<<ans<<endl;
	return 0;
}
