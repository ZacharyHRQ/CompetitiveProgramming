#include <iostream>
#include <utility>
#include <vector>
#define ll long long
using namespace std;
void max_self(ll& a, ll b){
	a = max(a,b);
}
int main()
{
	int n,w; 
	cin  >> n;
	cin >> w;
	vector<ll> dp(w+1);
	int c,v;
	for(int i = 0; i <n; i++){
		cin >> c;
	        cin >> v;	
		for(int weight = w - c; weight >= 0; --weight){
			max_self(dp[weight+c] , dp[weight] + v);
		}
	}
	ll a = 0;
	for(int i = 0; i <= w; ++i){
		max_self(a , dp[i]);
	}
	cout << a << endl;
    return 0;
}
