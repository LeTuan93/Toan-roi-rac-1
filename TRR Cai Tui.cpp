#include<bits/stdc++.h>
using namespace std;
int n;
int v_max=-1;
int v_current;
int w[1000],v[1000];
int cnt=0;
void Try(int i,int &m){
	if ((double)(v_current+(double)m*v[i]/w[i])<=(double)v_max) return;
     for (int j=1;j>=0;j--){
          v_current+=j*v[i];
          m-=w[i]*j;
          cnt++;
          if (cnt==n ){
               if (v_current > v_max && m>=0) v_max = v_current;
          }
          else Try(i+1,m);
          m+=w[i]*j;
          v_current-=j*v[i];
          cnt--;
     }
} 
 
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     cout.tie(NULL);
     int m;
     // n so luong do vat 
     // m khoi luong toi da
     cin >> n >> m;
     for (int i=0;i<n;i++){
          cin >> w[i] >> v[i];
     }
     for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (v[i]/w[i]<v[j]/w[j]){
				swap(v[i],v[j]);
				swap(w[i],w[j]);
			}
		}
	}
     
     Try(0,m);
     cout<<"Fopt:"<<v_max;
} 