#include <bits/stdc++.h>
using namespace std;

vector<int>v[4000];
int level[4000];
bool visit[5000];
int l=0;
int mx=0;
int k=0;

void bfs(int s){
	mx=0;
	k=0;
	memset(visit,false,sizeof(visit));
	queue<int>q;
    int lvl=0;
	q.push(s);
	level[s]=0;
	visit[s]=true;
	map<int,int>mp;
	while(!q.empty()){
		k=0;
		int p=q.front();
		q.pop();
		
		for(int i=0;i<v[p].size();i++){
			if(visit[v[p][i]]==false){
				level[v[p][i]]=level[p]+1;
				q.push(v[p][i]);
			    mp[level[p]+1]++;
				visit[v[p][i]]=true;
			}
			
//			cout<<v[p][i]<<" ";
			
		}
//		cout<<"\n";
		
			if(mx<mp[level[p]+1]){
			mx=mp[level[p]+1];
			l=level[p]+1;
			}

	}
	
	}


int main() {
 int n;

 cin>>n;

 for(int i=0;i<n;i++){
 	int x;
 	cin>>x;
 	for(int y=0;y<x;y++){
 	int z;
 	cin>>z;
 	v[i].push_back(z);
 	
 	}
 }
 
 int t;
 cin>>t;
 for(int i=0;i<t;i++){
 	memset(visit,false,sizeof(visit));
 	mx=0;
 	k=0;
 	int p;
 	cin>>p;
 	bfs(p);
 	if(mx==0)
 	cout<<"0\n";
 	else
 	cout<<mx<<" "<<l<<endl; 
 }
	
	// your code goes here
	return 0;
}