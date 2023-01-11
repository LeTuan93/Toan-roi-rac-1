#include<bits/stdc++.h>
using namespace std;
 
long long cmin=LONG_LONG_MAX,c[1000][1000],n, m=LONG_LONG_MAX;
long long   check[1000],x[1000],s=0;
void Try(long long i)
{
     if (s+cmin*(n-i+1)>=m) return;
     for (int j=1;j<=n;j++){
          if (check[j]==0)
          {
               check[j]=1;
               x[i]=j;
               s+=c[x[i-1]][x[i]];
               if (i==n){
                    if (s+c[x[n]][x[1]]<m) m=s+c[x[n]][x[1]];
               }
               else Try(i+1);
               check[j]=0;
               s-=c[x[i-1]][j];
          }
     }
}
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> n;
     if (n==1) {cout<<0;return 0;}
     else{
     for (int i=1 ; i<=n;i++){
          for (int j=1 ; j <= n; j++){
               cin >> c[i][j];
               cmin=min(cmin,c[i][j]);
          }
     }
     check[1]=1;
     x[1]=1;
     Try(2);
     cout << m;
     return 0;
     }
 
}