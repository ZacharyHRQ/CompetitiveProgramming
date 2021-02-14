#include <iostream>
using ll = long long; 
using namespace std;

int n; ll c[20]; 
ll solve(int i, ll s1 , ll s2){
    if(i == n){ 

        cout << abs(s1-s2) << endl;
        return abs(s1-s2);
    }
    
    return min(solve(i+1,s1+c[i],s2),solve(i+1,s1,s2+c[i]));
    
}
int main(){
    cin >> n;
    for(int i =0; i < n; i++){ 
        cin >> c[i];
    }
    cout << solve(0,0,0) << endl;

}

