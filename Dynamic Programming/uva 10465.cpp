#include <bits/stdc++.h>
using namespace std;
int dp[30500];
int m=0,n=0,t=0;





int main() {
	
    while(scanf("%d%d%d",&m,&n,&t)==3)
    {
	for(int i=0;i<=t;i++){
		if(i==m||i==n){
			dp[i]=1;
		}
		
		else
		dp[i]=-1;
	}
	dp[0]=0;
	
   for (int i = 0; i <= t; i++)
   {
   if (dp[i] != -1) {

             dp[i + m] = max(dp[i + m], dp[i] + 1);

                dp[i + n] = max(dp[i + n], dp[i] + 1);

            }}

        int s = t;
        while (dp[s] == -1)
            s--;
            
        if (s == t)
           cout << dp[s] << endl;

        else
            cout << dp[s] << " " << t - s << endl;
            }
	

	return 0;
}