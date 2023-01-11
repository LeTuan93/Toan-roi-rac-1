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
          int n,k;
          cin>>n>>k;
          int x[k+1];
          for (int i=0;i<k;i++) {x[i]=i+1;cout<<x[i];}
          cout<<" ";
          while(1){
               int i=k-1;
               while (x[i]==n-k+i+1) i--;
               if (i<0)
               {
                    if (x[0]==n-k+1) break;
                    for (int j=0;j<k;j++) cout<<j+1<<" ";
                    break;
               }
               else
               {
                     x[i]++;
                    for (int j=i+1;j<k;j++) x[j]=x[j-1]+1;
                    for (int i=0;i<k;i++) cout<<x[i];
                    cout<<" ";
               }
          }
          cout<<endl;
    }
}