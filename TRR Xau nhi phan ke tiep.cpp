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
     string x;
     cin>>x;
     int vitri=-1;
     for (int i=x.size()-1;i>=0;i--)
     {
          if (x[i]=='0')
          {
               x[i] = '1';
               vitri=i;
               break;
          }
     }
     if (vitri<0){
          for (int i=0;i<=x.size()-1;i++) cout<<"0";
          cout<<endl;
     }
     else {
               for (int i= vitri+1 ;i<x.size();i++) x[i]='0';
               cout<<x<<endl;
          }
    }
}