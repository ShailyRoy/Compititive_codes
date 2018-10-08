#include <bits/stdc++.h>
using namespace std;
int n=0,k=0;
int arr[1000];
int dp[1000][1000];
 
int solve(int i,int sum){
	if(i>=n){
		if(sum<=k)
		return sum;
		else return -(1<<28);
	}
	if(sum>k)
	return -(1<<28);
	
   if(dp[i][sum]!=-1)
   return dp[i][sum];
   
   int ans=0;
   ans=max(solve(i+2,sum+arr[i]),solve(i+1,sum));
   return dp[i][sum]=ans;
   
	}
 
int main() {
	
	int t;
	int j=1;
	scanf("%d",&t);
	while(t--){
		
		memset(dp,-1,sizeof(dp));
		scanf("%d%d",&n,&k);
		
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
		int m=solve(0,0);
		printf("Scenario #%d: %d\n",j,m);
		
		j++;
	}
	// your code goes here
	return 0;
}