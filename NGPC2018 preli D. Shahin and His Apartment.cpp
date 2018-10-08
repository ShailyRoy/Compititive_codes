/*
NGPC 2018 Preliminary 
BFS in GRID



As Shahin gets a promotion to his job, he is going to change his apartment (to a luxurious one). You can imagine his apartment as a rectangle. His apartment is divided into NxM cells with N rows and M columns.The upper left cell is marked as (0,0) and the lower right cell is marked as (N-1, M-1). See the image below for clarification. 


His apartment has exactly four doors. The doors are located in cell (0,0), (0,M-1), (N-1,0) and (N-1,M-1). We call them DoorCell. Some cells of his apartment contain furniture (a furniture occupies exactly one cell), some cells are blocked(a block cell can never contain furniture) and some cell does not have anything (empty). His target is to move all the furnitures to any of the DoorCells (because after that it will be easy to move all his furniture to his new apartment). He can move some furniture to a certain DoorCell and some other furniture to some other DoorCell. In the end (it does matter), every furniture will have to be in some DoorCell.

In one second Shahin can move a furniture to a cell (Adjacent 4 cell with a common edge) which shares a common edge with the cell that the furniture currently located. He can move only one piece of furniture at a time. He can not move furniture to such a cell which is blocked. Remember that a cell can contain multiple items of furniture in this ongoing process). Shahin is smart (obviously not smarter than Riddho), so he will move all the furniture to some DoorCell in minimum time possible. Remember that when he is not moving any furniture he can step to any cell (possibly block cell). No significant time is needed to move another cell while he is not moving any furniture. Initially, there is at most one furniture in one cell.


Input

First Line of the input will contain an Integer T (1 ≤T≤100), denotes number of test case. Each test case starts with two space separated integers N, M. Next, N line contains M (2 ≤ N, M ≤ 200) characters (only 'B', 'F' or '.' character will appear). Those N lines represent the apartment. The first line represents the first row of the apartment and so on.

Character 'B' represents block cell.
Character 'F' represents that cell has a furniture.
Character '.' represents empty cell.



Output
For each test case print a single integer in a separate line, denoting the minimum number of seconds needed to move all furniture to any of the DoorCells. If it is impossible to move any of them then print -1.


Sample
Input	Output
5
3 3
.B.
BFB
.B.
3 3
...
BFB
.B.
3 3
...
BFF
.B.
3 3
.F.
...
.F.
3 3
...
...
...
Case 1: -1
Case 2: 2
Case 3: 3
Case 4: 2
Case 5: 0

Test case 1: You can not move the furniture to anywhere.
Test case 2: This is one of possible valid solution. Test Case 3: This is one of possible valid solution. Test Case 4: This is one of the possible valid solutions



*/


#include <bits/stdc++.h>
using namespace std;
char g[25][25];
int vis[25][25];
int row,col;
int drx[]={-1,1,0,0};
int dry[]={0,0,1,-1};
int m,n;

int bfs(int sr,int sc){
	int min;
	int cnt=0;
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
				 vis[x+drx[i]][y+dry[i]]=vis[x][y]+1;
				 q.push(x+drx[i]);
				 q.push(y+dry[i]);

				 if((x+drx[i]==0&&y+dry[i]==0)||(x+drx[i]==0&&y+dry[i]==m-1)||(x+drx[i]==n-1&&y+dry[i]==0)||(x+drx[i]==n-1&&y+dry[i]==m-1)){
				 
			//	 cout<<x+drx[i]<<" "<<y+dry[i]<<" " << cnt<<endl;
				 return vis[x+drx[i]][y+dry[i]];
				 }
			}
		}
	}
	return -1;
}


int main() {
	int nn;
	cin>>nn;
	for(int i=0;i<nn;i++){
	
		cin>>col>>row;
		n=row;
		m=col;
		int sr,sc;
		
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				cin>>g[j][k];
			//	cout<<g[j][k];
				if(g[j][k]=='@'){
					sr=j;
					sc=k;
				}
			}
		}
		
		int ans=0;
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				if(g[j][k]=='F'){
					sr=j;
					sc=k;
					ans+=bfs(sr,sc);
				}
			}
		}
		
		printf("Case %d: %d\n",i+1,ans);
		
	}
	// your code goes here
	return 0;
}