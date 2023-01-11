#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main()
{
    int t;
    cin>>t;
    while  (t--)
    {
         int n;
         cin>>n;
         int s[n+1];
         for (int i=0;i<n;i++) cin>>s[i];
         int i=n-1;
         for (i=n-1;i>=1;i--){
              if (s[i]>s[i-1])
              {
                   int vitri=i-1;
                   for (int j=n-1 ; j >= vitri ;j--)
                   {
                        if (s[j]>s[vitri]){
                             swap(s[j],s[vitri]);
                             break;
                        }
                   }
                   sort(s+vitri+1, s+n);
                   break;
              }
         }
         if (i==0) for (int i=0;i<n;i++) cout<<i+1<<" ";
         else{
         for (int i=0 ;i<n;i++) cout<<s[i]<<" ";
         }
         cout<<endl;
    }
}