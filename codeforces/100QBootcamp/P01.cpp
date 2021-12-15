#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a;
	cin >> n; 
	int arr [n]; 
	int stack [n]; 
	for(int i=0;i<n;i++){ 
		cin >> a; 
		arr[i] = a; 
	}
	for(int i=0;i<n;i++){ 
		stack[i] = arr[i]; 
	}
	int index = 0; 
	for(int j=n-1;j>=0;j--){ 
		arr[index] = stack[j]; 
		index++; 
	}
	for(int i=0;i<n;i++){ 
		cout << arr[i] << " ";
	}
	

	

}
