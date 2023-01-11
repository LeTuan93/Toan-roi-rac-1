#include<bits/stdc++.h>
using namespace std;

int x[100],t;

void hoanvi(int i){
     for (int i=1;i<=t;i++) {
          x[i]=i;
          cout << i;
     }
     cout << " ";
     while (1){
          int vt=i;
          while (x[vt]<x[vt-1]){
               vt--;
          }
          if (vt==1) break;
          for (int ii=i;ii>=vt;ii--){
               if (x[ii]>x[vt-1]){
                    swap(x[ii],x[vt-1]);
                    break;
               }
          }
          sort(x+vt,x+i+1);
          for (int i=1;i<=t;i++) cout<<x[i];
          cout<<" "; 
     }
}
int unused[100];
void hoanvi2(int i){
     for (int j=1;j<=t;j++){
          if (!unused[j]){
               unused[j]=1;
               x[i]=j;
               if (i==t){
                    for (int i=1;i<=t;i++) cout<<x[i];
                    cout<<" ";
               }
               else hoanvi2(i+1);
               unused[j]=0;
          }
     }
}

int n,k;
void chapckn(int n,int k){
     for (int i=1;i<=k;i++){
          x[i]=i;
          cout<<x[i];
     }
     cout<<" ";
     while (1){
          int vt=k;
          while (n-k+vt==x[vt]){
               vt--;
          }
          if (vt==0) break;
          x[vt]++;
          for (int i=vt+1;i<=n;i++){
               x[i]=x[i-1]+1;
          }
          for (int i=1;i<=k;i++) cout<<x[i];
          cout<<" ";
     }
}

void chapckn2(int i){
     for (int j=i;j<=n-k+i;j++){
          if (x[i-1]<j){
               x[i]=j;
               if (i==k){
                    for (int i=1;i<=k;i++) cout<<x[i];
                    cout<<" ";
               }
               else chapckn2(i+1);
          }    
     }
}
int cnt=0;
void nhiphan(int i){
     for (int i=1;i<=t;i++){
          x[i]=0;
          cout<<x[i];
     }
     cout<<" ";
     while (1){
          int vt=t;
          while (x[vt]==1){
               vt--;
          }
          if (vt==0) break;
          x[vt]=1;
          for (int i=vt+1;i<=t;i++){
               x[i]=0;
          }
          for (int i=1;i<=t;i++) cout<<x[i];
          cout<<" ";
     }
}
void nhiphan2(int i){
     for (int j=0;j<=1;j++){
          x[i]=j;
          if (i==t){
               for (int i=1;i<=t;i++) cout<<x[i];
               cout<<" ";
          }
          else nhiphan2(i+1);
     }
}
int main(){
     //cin >> t;
     //hoanvi(t);
     //hoanvi2(1);
     
     //cin >> n >> k;
     //chapckn(n,k);
     //cout<<endl;
     //chapckn2(1);
     
     //cin >> t;
     //nhiphan(t);
     //cout<<endl<<cnt;
     //nhiphan2(1);
     
}