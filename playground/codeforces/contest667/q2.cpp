#include <bits/stdc++.h>
using namespace std;
int main(){

	int t;
	cin >> t;
	for(int i = 0; i < t; t++){
		long long a,b,x,y,n;
		cin >> a >> b >> x >> y >> n;
		if(a-n>x){ 
			cout << (a-n)*b << endl;
		}
		else{ 
			cout << (b-n)*a << endl;
		}
	}
}	

