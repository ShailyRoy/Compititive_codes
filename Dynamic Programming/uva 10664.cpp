#include <bits/stdc++.h>
using namespace std;
int wt[21];
int dp[22][5000];
  int t=0, el=0, i=0, sum=0;


bool solve(int n, int w){
 
 if(w==sum-w)
 return 1;
 
 
 if(dp[n][w]!=-1)
 return dp[n][w];
  
  if(n>=i)
  return 0;
  
    int ans=0;
    ans =  solve(n+1,w+wt[n])|| solve(n+1,w);
  
    return dp[n][w]=ans;
    
    
}


int main()
{
  
    string s;
    stringstream ss;
    scanf("%d", &t);
    
    getline(cin,s);
    while(t--){
        getline(cin,s);
        ss.clear();
        ss << s;
        
        
        i = 0;
        sum = 0;
        
        while(ss >> el){
            wt[i] = el;
            sum += el;
            i++;
        }

        
             memset(dp,-1,sizeof(dp));
            if(solve(0,0)) 
            printf("YES\n");
            
            else printf("NO\n");

    }
    return 0;
}