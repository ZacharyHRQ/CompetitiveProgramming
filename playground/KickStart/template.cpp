#include <iostream>
using namespace std;
int main(){
  int t;
  int n,k,s;
  cin >> t;
  for(int i = 0; i < t ; i++)
  {
    cin >> n >> k >> s;
    int ans = (k - 1);
    if (k - s > s) ans += (n+1);
    else ans += k-s + (n - s) + 1;
    cout << "Case #" << i+1 << ": "; 
    cout << ans;
  }

}

