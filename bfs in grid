#include <bits/stdc++.h>
using namespace std;
char g[25][25];
int vis[25][25];
int row,col;
int drx[]={-1,1,0,0};
int dry[]={0,0,1,-1};


int bfs(int sr,int sc){
	int cnt=1;
	memset(vis,-1,sizeof(vis));
	vis[sr][sc]=0;
	queue <int> q;
	q.push(sr),q.push(sc);
	while(!q.empty()){
		int x=q.front();
		q.pop();
		int y = q.front();
		q.pop();
		for(int i=0;i<4;i++){
			if(x+drx[i]<row && x+drx[i]>=0 && y+dry[i]<col && y+dry[i]>=0 && vis[x+drx[i]][y+dry[i]]==-1 && g[x+drx[i]][y+dry[i]]=='.'){
				 vis[x+drx[i]][y+dry[i]]=0;
				 q.push(x+drx[i]);
				 q.push(y+dry[i]);
				 cnt++;
			}
		}
	}
	return cnt;
}


int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	
		cin>>row>>col;
		int sr,sc;
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				cin>>g[j][k];
				if(g[j][k]=='@'){
					sr=j;
					sc=k;
				}
			}
		}
		
		printf("Case %d: %d\n",i+1,bfs(sr,sc));
		
	}
	// your code goes here
	return 0;
}