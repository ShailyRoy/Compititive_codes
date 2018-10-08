#include <bits/stdc++.h>
using namespace std;
int p;
int bin (int q,int n[])
{
    int L=0, R=p-1, mid;
    while (L!=R){
        mid = (L+R)/2;
        if (n[mid] >= q) R = mid;
        else L = mid+1;
    }
    if (n[L] == q) return L+1;
    else return -1;
}

int main() {
	int q;
	int j=1;
	while(scanf("%d%d",&p,&q)&&p+q!=0){
		int pa[p];
		int qa[q];
		
		for(int i=0;i<p;i++)
		scanf("%d",&pa[i]);
		
     	for(int i=0;i<q;i++)
		scanf("%d",&qa[i]);
		
		sort(pa,pa+p);
		
		printf("CASE# %d:\n",j);
		j++;
		for(int i=0;i<q;i++)
		{
			int s=bin(qa[i],pa);
		if(s>-1)
		printf("%d found at %d\n",qa[i],s);
		
		else
		printf("%d not found\n",qa[i]);
		}
	}
	
	
	
	// your code goes here
	return 0;
}
