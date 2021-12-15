#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a,b;
	cin >> n; 
	int arr [n]; 
	int sum [n]; 
	for(int i=0;i<n;i++){ 
		cin >> a; 
		arr[i] = a; 
	}
	sum[0] = arr[0];
	for(int i=1;i<n;i++){ 
		sum[i] = arr[i] + sum[i-1]; 
	}
	
	cin >> a >> b;
	if( a == 0)
		cout << sum[b];
	else
		cout << sum[b] - sum[a-1]; 
		

}
