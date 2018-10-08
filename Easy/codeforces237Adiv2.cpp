/*
Codeforces 237A div 2
by
Shaily Roy
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	char arr[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	bool b=true;
	char s = arr[0][0];
	
	for(int i=0;i<n;i++){
			if(arr[i][n-1-i]!=s||arr[i][i]!=s){
			b=false;
			break;
			}
	}
	
	if(n!=1){
		char s1=arr[0][1];
		if(s==s1)
		b=false;
	if(b){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			if(j!=n-1-i&&j!=i){
			if(arr[i][j]!=s1){
			b=false;
			break;
			}}
	}	}
	}}
	
	if(b) printf("YES\n");
	else
	printf("NO\n");
	
	// your code goes here
	return 0;
}
