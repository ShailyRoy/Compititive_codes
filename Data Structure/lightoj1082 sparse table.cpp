#include <bits/stdc++.h>
using namespace std;

int n=0,k=16,q=0,l=0,h=0;
int a[100010];

int sparse[100010][30];




int main() {
	int t;
	scanf("%d",&t);
	int m=1;
	while(t--){
		
		cin>>n>>q;
	
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("Case %d:\n",m);
	m++;
			
			
			
		for(int i=0;i<n;i++){
			sparse[i][0]=a[i];
		}
		
        for(int j = 1; j <= k; j++) {
        for(int i = 0; i <= n - (1 << j); i++){
			sparse[i][j] = min(sparse[i][j - 1], sparse[i + (1 << (j - 1))][j - 1]);
		}
	}
	
	for(int i=0;i<q;i++){
		
		scanf("%d %d",&l,&h);
			int ans=100000000;
			
			l--;h--;
			
	
			
		 for(int j = k+1; j >= 0; j--) {
            if(l + (1 << j) - 1 <= h) {
                ans = min(ans, sparse[l][j]);
                l += 1 << j; 
            }
        }
        printf("%d\n",ans);
		}
		
		
		
	}
	
	
	return 0;
}