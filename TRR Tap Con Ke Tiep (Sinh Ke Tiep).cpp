#include<bits/stdc++.h>
using namespace std;

int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     
     int t;
     cin >> t;
     while (t--){
          int n,k;
          cin >> n >> k;
          int a[k+5];
          for (int i=1;i<=k;i++) cin >> a[i];
          int vt=k;
          a[0]=-100;
          while (a[vt]==n-k+vt) vt--;
          if (vt==0){
               for (int i=1;i<=k;i++) cout << i << " ";
               cout<<endl;
          }
          else {
               a[vt]++;
               for (int i=vt+1;i<=k;i++) a[i]=a[i-1]+1;
               for (int i=1;i<=k;i++) cout << a[i] <<" ";
               cout<<endl;
          }
     }
}