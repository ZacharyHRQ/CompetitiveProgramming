#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	long long a,b,s = 0;
	cin >> t;

	while(t--){
		cin >> a >> b;
		long long k = abs(a-b);
		cout << k/10 + bool(k%10) << endl;
	}}


