#include<bits/stdc++.h>
using namespace std;

int x[1001],a[1001];
int n,k;
int unused[1001];

void backtrackCKN(int cnt){
	for (int i=x[cnt-1]+1;i<=n-k+cnt;i++){
		x[cnt]=i;
		if ( cnt == k){
			for (int i=1;i<=k;i++){
				cout << x[a[i]]<<" ";
			}
			cout<<endl;
		}
		else backtrackCKN(cnt+1);
	}
}
void sinhCKN(){
	for (int i=1;i<=k;i++){
		x[i]=a[i];
	}
	while (1){
		for (int i=1;i<=k;i++){
			cout<<x[i]<<" ";
		}
		cout<<endl;
		int vt = k;
		while (x[vt]==n-k+vt) vt--;
		if (vt<1) break;
		x[vt]++;
		for (int i=vt+1;i<=k;i++){
			x[i]=x[i-1]+1;
		}
	}
}

void backtrackNP(int cnt){
	for (int i=0;i<=1;i++){
		x[cnt]=i;
		if ( cnt == n){
			for (int i=1;i<=n;i++){
				cout << x[i];
			}
			cout<<endl;
		}
		else backtrackNP(cnt+1);
	}
}
void sinhNP(){
	for (int i=1;i<=n;i++) x[i]=0;
	while (1){
		for (int i=1;i<=n;i++){
			cout << x[i]<<" ";
		}
		cout<<endl;
		int vt=n;
		while (x[vt]==1) vt--;
		if (vt<1) break;
		x[vt]=1;
		for (int i=vt+1;i<=n;i++) x[i]=0;
	}
}

void backtrackHoanVi(int cnt){
	for (int i=1;i<=n;i++){
		if (unused[i]==0){
			unused[i]=1;
			x[cnt] = i;
			if (cnt == n){
				for (int i=1;i<=n;i++) cout<<x[i]<<" ";
				cout<<endl; 
			}
			else backtrackHoanVi(cnt+1);
			unused[i]=0;
		}
	}
}
void sinhHoanVi(){
	for (int i=1;i<=n;i++){
		x[i]=i;
	}
	while (1){
		for (int i=1;i<=n;i++) cout<<x[i]<<" ";
		cout<<endl;
		int vt=n-1;
		while ( vt>0 && x[vt]>x[vt+1]) vt--;
		if (vt<1) break;
		int vt2=n;
		while (x[vt2]<x[vt]) vt2--;
		swap(x[vt],x[vt2]);
		sort(x+vt+1,x+n+1);
	}
}
int main(){
	cin >> n >> k;
	for (int i=1;i<=k;i++) a[i]=i;
	cout<<"BACK TRACK CKN :"<<endl;
	backtrackCKN(1);
	cout<<"Sinh CKN :"<<endl;
	sinhCKN();
	cout<<"BACK TRACK NHI PHAN :"<<endl;
	backtrackNP(1);
	cout<<"Sinh NHI PHAN :"<<endl;
	sinhNP();
	cout<<"BACK TRACK HOAN VI :"<<endl;
	backtrackHoanVi(1);
	cout<<"Sinh HOAN VI :"<<endl;
	sinhHoanVi();
}
